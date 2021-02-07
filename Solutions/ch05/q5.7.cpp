/* 7. Suppose you are given some observed positions of a projectile. Each position is an
 * (x,y) pair. You are further told that the projectile is surely known to pass through
 * the origin (0,0). Derive the best fit trajectory for the given points, such that it passes
 * through (0,0). For this you will have to adapt the process we followed to fit a straight
 * line.
 */

#include <simplecpp>
main_program{ // Fit line to set of points clicked by the user.
    cout << "Number of points: ";
    int n; cin >> n; // number of points to which the line is to be fit.
    initCanvas("Fitting a parabolic trajectory to given path data",500,500);

    double x = 0, y = 0;
    double a=0, b=0, c=0;   // y = ax^2 + bx + c (general equation of parabola)
    double sx2y=0, sxy=0, sy=0, sx4=0, sx3=0, sx2=0, sx=0;  // to hold sums for i = 1 to n
    double p=0, q=0, r=0, s=0, t=0, u=0;    // for solving equations

    Circle pt(0,0,0); // Will be used to show point clicked by user
    repeat(n){
        int Pos = getClick();
        x = Pos/65536;
        y = Pos % 65536;
        pt.reset(x,y,5); // Centered at the li k position
        pt.imprint();
        // Because we will move pt for subsequent points.
        sx2y += x*x*y; sxy += x*y; sy += y; sx4 += x*x*x*x;
        sx3 += x*x*x; sx2 += x*x; sx += x; n+=1;
    }   //end of loop
    //n = n+1;    // +1 for (0,0) point i.e in screen (0,500)
    //sy += 500;  // rest of the terms are zero as x=0, y=500.

    //  solving 3 equations
    /*  sx2y = a.sx4 + b.sx3 + c.sx2    ...(1)
        sxy  = a.sx3 + b.sx2 + c.sx     ...(2)
        sy   = s.sx2 + b.sx  + c.n      ...(3)

        s means "summation of", x2,x3 etc means x^2,x^3 etc.
        Value of n will be 1 more than number of clicks because 
        (0,0) is already given.
    */
    
    p = (sx2y/sx4)-(sy/sx3);
    q = (sx3/sx4)-(sx2/sx3);
    r = (sx2/sx4)-(sx/sx3);
    s = (sx2y/sx4)-(sy/sx2);
    t = (sx3/sx4)-(sx/sx2);
    u = (sx2/sx4)-(n/sx2);

    c = ((p*t)-(s*q)) / ((r*t)-(u*q));
    b = (p-(c*r))/q;
    a = (sy - b*sx - c*n)/sx2;  //
    cout<<"Equation: y = "<<a<<".x^2 + "<<b<<".x + "<<c<<endl;

    //  finally draw the curve
    x=0; y=0;
    pt.reset(x,y,5); pt.penDown();
    repeat(canvas_width()) {
        x++;
        y = (a*x*x) + (b*x) + c;
        pt.moveTo(x,y);
    }

    wait(10);

}


