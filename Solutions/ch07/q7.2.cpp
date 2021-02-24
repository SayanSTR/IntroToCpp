/* 2. Suppose we are given n points in the plane: (x1,y1),...,(xn,yn). Suppose the points
 * are the vertices of a polygon, and are given in the counter-clockwise direction around
 * the polygon. Write a program using a while loop to calculate the perimeter of the
 * polygon. Also do this using a for loop.
 */

#include <simplecpp>
main_program
{
    int n; cout<<"Enter number of points: "; cin>>n;
    if(n<3){cout<<"Not an enclosed area."<<endl; return 0;}
    double xo, yo, x0, y0, xn, yn, perimeter;
    cout<<"First point\nEnter x1: "; cin>>x0; cout<<"Enter y1: "; cin>>y0;
    xo=x0; yo=y0;
    for(;n>1;n--)
    {
        cout<<"Next point\nEnter x: "; cin>>xn; cout<<"Enter y: "; cin>>yn;
        perimeter += sqrt(pow((xn-x0),2) + pow((yn-y0),2));
        x0=xn; y0=yn;
    }
    perimeter += sqrt(pow((xo-x0),2) + pow((yo-y0),2));
    cout<<"Perimeter of polygon = "<<perimeter<<" units."<<endl;
}