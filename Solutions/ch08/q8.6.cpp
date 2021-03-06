/* 6. Suppose we are given n points in the plane: (x1,y1),...,(xn,yn). Suppose the points
 * are the vertices of a polygon, and are given in the counterclockwise direction around the
 * polygon. Write a program to calculate the area of the polygon. Hint 1: Break the area
 * into small triangles with known coordinates. Then compute the lengths of the sides of
 * the triangles, and then use Heron's formula to find the area of the triangles. Then add
 * up. Hint 2: Break the boundary of the polygon into two parts, an up facing boundary
 * and a down facing boundary. Express the area as the area under these boundaries each
 * considered as functions f(u).
 */

#include <simplecpp>
main_program
{
    int n;
    float x1,y1,x2,y2,xn,yn;
    double a, b, c, s, area=0, totalArea=0;
    cout<<"Number of vertices of polygon: "; cin>>n;
    while(n<3)
    {cout<<"Must be 3 or more vertices. Enter again.\nNumber of vertices of polygon: "; cin>>n;}
    cout<<"Provide co-ordinates of vertices of polygon in counter-clockwise direction\n";
    cout<<"x1=";cin>>x1;cout<<"y1=";cin>>y1;
    cout<<"x2=";cin>>x2;cout<<"y2=";cin>>y2;
    for(int i=3; i<=n; i++)
    {
        cout<<"x"<<i<<"=";cin>>xn;cout<<"y"<<i<<"=";cin>>yn;
        a=sqrt( pow((x1-x2),2) + pow((y1-y2),2) ); cout<<"a="<<a;
        b=sqrt( pow((x2-xn),2) + pow((y2-yn),2) ); cout<<" b="<<b;
        c=sqrt( pow((x1-xn),2) + pow((y1-yn),2) ); cout<<" c="<<c;
        s=((a+b+c)/2.0); cout<<" s="<<s;
        area=sqrt(s*(s-a)*(s-b)*(s-c)); cout<<" area="<<area<<endl;
        totalArea+=area;
        x2=xn; y2=yn;
    }
    cout<<"Area of the "<<n<<" sided polygon = "<<totalArea<<endl;
}