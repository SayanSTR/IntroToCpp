/* 5. Modify the projectile motion program to trace the trajectories of the projectile for the
 * same initial velocity and different angles. As you may know, for a fixed velocity, the
 * projectile goes farthest if it is launched at 45 degrees to the horizontal. You should be
 * able to verify this statement using your program.
 */

#include <simplecpp>
main_program{
    initCanvas("Projectile motion", 500,500);
    cout<<"Click to set initial position."<<endl;
    int start = getClick();    // initial position
    repeat(5){
        double x=start/65536, y=start%65536;
        Circle projectile(x, y, 5); projectile.penDown();
        cout<<"Click to give direction."<<endl;
        int dir = getClick(); x=dir/65536-x; y=dir%65536-y; // distance between points in both direction
        double t = sqrt(x*x + y*y);
        // initial linear velocity(v0) as 5 unit for all cases
        double vx=(x/t)*5, vy=(y/t)*5, g=0.1, T=abs(2*vy/g);    // cos(theta)=x/t, sin(theta)=y/t
        cout<<"T: "<<T<<"\t Angle: "<<(-180*asin(y/t))/PI<<" degrees"<<endl;
        repeat(T){
            projectile.move(vx,vy);
            vy += g;
            wait(0.1);
        }
    }
    cout<<"Wait for 3 seconds before program ends."<<endl;
    wait(3);
}