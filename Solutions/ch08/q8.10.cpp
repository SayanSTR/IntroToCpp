/* 10. Consider the problem of finding the roots of f(x) = x^3 - x/2 + 1/4. See what happens
 * using the Newton-Raphson method for guesses for the initial value. In particular, try
 * x0=1 and x0=0:5. Can you solve this using the bisection method?
 */

/* Newton-Raphson
f(x) = x^3 - x/2 + 1/4
f'(x) = 3x^2 -0.5
 */

#include <iostream>
#include <math.h>
using namespace std;

double f(double x) {
    return ( pow(x,3) - x/2.0 + 1.0/4 );
}

double df(double x) {
    return ( 3*x*x - 0.5 );
}

double newtonRaphson() {
    double xi; cout<<"Initial value of x: "; cin>>xi; //char dummy;
    double fx=0;
    cout<<"xi: "<<xi<<"\tfx: "<<f(xi)<<endl;
    while(abs(fx=f(xi))> 0.00001)
    {
        cout<<"xi: "<<xi<<"\tf(x): "<<fx<<"\tdf(x): "<<df(xi);
        xi = xi - fx/df(xi);
        cout<<"\tx[i+1]: "<<xi<<endl;
        //cin>>dummy;
    }
    cout << "root : "<< xi <<endl;
    return xi;
}

double bisection() {
    float xL,xR; // invariant: f(xL),f(xR) have different signs.
    float xM,epsilon;
    cout<<"Lower bound(left): "; cin>>xL;
    cout<<"Upper bound(right): "; cin>>xR;
    cout<<"Margin of error: "; cin>>epsilon;
    bool xL_is_positive, xM_is_positive;
    xL_is_positive = f(xL) > 0;
    // Invariant: xL_is_positive gives the sign of f(x_L).
    while(xR-xL >= epsilon) {
        xM = (xL+xR)/2;
        xM_is_positive = f(xM) > 0;
        if(xL_is_positive == xM_is_positive)
        xL = xM; // does not upset any invariant!
        else
        xR = xM; // does not upset any invariant!
    }
    cout << xL << endl; return xL;
}


int main()
{
    newtonRaphson();
    bisection();
}