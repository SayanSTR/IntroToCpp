/* 10. In this problem you are to determine how light reflects off a perfectly reflecting spherical
 * surface. Suppose the sphere has radius r and is centered at some point (x,y). Suppose
 * there is a light source at a point (x',y). Rays will emerge from the source and bounce
 * off the sphere. As you may know, the reflected ray will make an angle to the radius at
 * the point of contact equal to that made by the incident ray. Write a program which
 * traces many such rays. It should take r,x,y,x' as input. Of course, in the plane the
 * sphere will appear as a circle.
 */

#include <simplecpp>
main_program {
    int sourceX, sourceY, centerX, centerY, r;
    int canvasWidth=500, canvasHeight=500, click, rayLength;
    double centerToCenter, alpha, theta, slopeOfMid, raySlope, tangent1x, tangent1y, tangent2x, tangent2y, sinAlpha, cosAlpha;
    double slopeTangent1, slopeTangent2, rotation, angle;
    cout<<"Width of canvas: "<<canvasWidth<<" Height of canvas: "<<canvasHeight<<endl;
    cout<<"X co-ordinate of light source: "; cin>>sourceX;
    cout<<"Y co-ordinate of light source: "; cin>>sourceY;
    cout<<"X co-ordinate of centre of sphere: "; cin>>centerX;
    cout<<"Y co-ordinate of centre of sphere: "; cin>>centerY;
    cout<<"Radius of sphere: "; cin>>r;
    initCanvas("Reflection off a surface");
    Circle source(sourceX,sourceY,3);
    Circle surface(centerX,centerY,r);
    
    centerToCenter = sqrt( pow((centerX-sourceX),2) + pow((centerY-sourceY),2) );
    cout<<"Distance between light source and centre of sphere(d) = "<<centerToCenter<<endl;
    
    rayLength = centerToCenter + r + 100;
    cout<<"Length of Ray(rayL) = "<<rayLength<<endl;

    slopeOfMid = (centerY-sourceY)*1.0/(centerX-sourceX);
    cout<<"Slope of center line(md) = "<<slopeOfMid<<endl;

    sinAlpha = r*1.0/centerToCenter; cosAlpha = sqrt(1-pow(sinAlpha,2));
    alpha = (asin(r*1.0/centerToCenter))*(180/PI);
    cout<<"Angle between tangent and centerline: "<<alpha<<" degree"<<endl;
    cout<<"sin(alpha)="<<sinAlpha<<", cos(alpha)="<<cosAlpha<<endl;

    tangent1x = ((centerX-sourceX)*cosAlpha - (centerY-sourceY)*sinAlpha) + sourceX;
    tangent1y = ((centerX-sourceX)*sinAlpha + (centerY-sourceY)*cosAlpha) + sourceY;
    Line tangent1(sourceX,sourceY,tangent1x,tangent1y);
    sinAlpha = sinAlpha*(-1);
    tangent2x = ((centerX-sourceX)*cosAlpha - (centerY-sourceY)*sinAlpha) + sourceX;
    cout<<"tangent1x:"<<tangent1x<<", tangent1y:"<<tangent1y<<endl;
    tangent2y = ((centerX-sourceX)*sinAlpha + (centerY-sourceY)*cosAlpha) + sourceY; 
    cout<<"tangent2x:"<<tangent2x<<", tangent2y:"<<tangent2y<<endl;
    Line tangent2(sourceX,sourceY,tangent2x,tangent2y);

    slopeTangent1 = ((tangent1y-sourceY)/(tangent1x-sourceX));
    slopeTangent2 = ((tangent2y-sourceY)/(tangent2x-sourceX));
    cout<<"internal angle: "<<(180/PI)*abs(atan(slopeTangent2) - atan(slopeTangent1))<<endl;
    theta = (180/PI)*(atan(slopeTangent2) - atan(slopeTangent1));
    cout<<"theta "<<theta<<endl;
    raySlope = slopeTangent2;
    rotation = (theta/5)*(PI/180); angle = rotation;
    for(int i=1; i<5; i++)
    {
        //slope += tan(2*alpha/5);
        Circle ray(sourceX, sourceY, 3); ray.penDown();
        double newX=0, newY=0;
        newX = tangent2x*cos(angle) + tangent2y*sin(angle);
        newY = tangent2y*cos(angle) - tangent2x*sin(angle);
        raySlope = (newY-sourceY)/(newX-sourceX);
        double vx=1, vy=1*raySlope;
        for(int j=0; j<rayLength; j++)
        {
            ray.move(vx, vy*1);
        }
        angle += rotation;
    }

    wait(5);
}