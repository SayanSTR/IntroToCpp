/* 7. Write a function to find roots of a function f using Newton's method. It should take
 * as arguments pointers to f and also to the derivative of f.
 */

#include <iostream>
#include <math.h>
using namespace std;

double fCubeRoot(double x, double y) {
    return x*x*x - y;
}
double dfCubeRoot(double x, double y) {
    return 3*x*x;
}

double newtonRaphson(int n, double(*f)(double,double), double(*df)(double,double)) {
    double x; cout<<"Initial value of root x: "; cin>>x;
    double y; cout<<"Value of y: "; cin>>y;
    for(int i=0; i<n; i++)
    {
        x = x - f(x,y)/df(x,y);
    }
    cout << "root : "<< x <<endl;
    return x;
}

int main()
{
    int n; cout<<"Number of iteration for Newton Raphson method? :"; cin>>n;
    
    newtonRaphson(n, fCubeRoot, dfCubeRoot);
}