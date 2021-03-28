/* 8. The k-norm of a vector (x,y,z) is defined as (x^k + y^k + z^k)^(1/k). Note that the 2-norm is
 * in fact the Euclidean length. Indeed, the most commonly used norm happens to be
 * the 2 norm. Write a function to calculate the norm such that it can take k as well
 * as the vector components as arguments. You should also allow the call to omit k, in
 * which case the 2 norm should be returned.
 */

#include <iostream>
#include <math.h>
using namespace std;

// function to calculate x^(1/n)
/*  y = x^n; f(x) = x^n - y; df(x) = n.x^(n-1);
    using Newton-Raphson x1 = x0 - f(x)/df(x);
*/
double root(double y, double n) {
    double x=0, xi=1;
    while (abs(xi-x)>= 0.00001)
    {
        x = xi;
        xi = x - ( (pow(x,n) - y)/(n*pow(x,(n-1)) ) );
        // cout<<"xi: "<<xi<<"\tx: "<<x<<endl; // test
    }
    return xi;
}

// function to calculate k-norm of a vector (x,y,z)
double kNorm(double x, double y, double z, double k=2) {
    //
    return root( (pow(x,k)+pow(y,k)+pow(z,k)), k );
}

// Main function
int main()
{
    double x, y, z, k;
    char option=' ';

    while(true) {
        cout<<"Enter vector components seperated by space (x y z): "; cin>>x>>y>>z;
        cout<<"Enter value of k for k-norm: "; cin>>k;
        if(k<=2) cout<<"2-norm of given vector is: "<<kNorm(x,y,z)<<endl;
        else cout<<k<<"-norm of given vector is: "<<kNorm(x,y,z,k)<<endl;
        cout<<"Press 'q' to quit or any other key to calculate k-norm again: "; 
        cin>>option; if(option=='q') break;
    }
}