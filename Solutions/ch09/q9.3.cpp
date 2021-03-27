/* 3. Write a function to find the cube root of a number using Newton's method. Accept
 * the number of iterations as an argument.
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

double newtonRaphson(int n, double y) {
    double x; cout<<"Initial value of root x: "; cin>>x; //char dummy;
    for(int i=0; i<n; i++)
    {
        x = x - fCubeRoot(x,y)/dfCubeRoot(x,y);
    }
    cout << "root : "<< x <<endl;
    return x;
}

int main()
{
    int n; cout<<"Number of iteration for Newton Raphson method? :"; cin>>n;
    double y; cout<<"Cube root of? :";cin>>y;
    newtonRaphson(n, y);
}