/* 6. Suppose we are given the x,y coordinates of n points in the plane. We wish to know
 * if any 3 of them are collinear. Write a program which determines this. Make sure
 * that you consider every possible 3 points to test this, and that you test every triple
 * only once. The coordinates should be represented as floats. When you calculate
 * slopes of line segments, because of the floating point format, there will be round-off
 * errors. So instead of asking whether two slopes are equal, using the operator ==, you
 * should check if they are approximately equal, i.e. whether their absolute difference is
 * small, say 10^(-5). This is a precaution you need to take when comparing floating point
 * numbers. In fact, you should also ask yourself whether the slope is a good measure to
 * check collinearity, or whether you should instead consider the angle, i.e. the arctangent
 * of the slope.
 */

#include <iostream>
#include <simplecpp>
using namespace std;
int main()
{
    int n; cout<<"No of co-ordinates: "; cin>>n;
    int p[n][2]{}, lines; 
    for (int i = 0; i < n; i++)
    {
        cout<<"Point "<<i+1<<":\n";
        cout<<"x: ";cin>>p[i][0]; cout<<"y: "; cin>>p[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Point "<<i+1<<": ";
        cout<<"x: "<<p[i][0]<<"\ty: "<<p[i][1]<<endl;
    }
    
    for (int i = 0; i < n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                float slope1 = (p[i][1]-p[j][1])*1.0/(p[i][0]-p[j][0]);
                float slope2 = (p[j][1]-p[k][1])*1.0/(p[j][0]-p[k][0]);
                //cout<<"slope1:"<<slope1<<" slope2:"<<slope2<<endl;
                if(abs(slope2-slope1)<0.00001) {
                    lines++;
                    cout<<"Collinear:\n";
                    cout<<p[i][0]<<","<<p[i][1]<<"\t"<<p[j][0]<<","<<p[j][1]<<"\t"<<p[k][0]<<","<<p[k][1]<<endl;
                    cout<<"slope1 = "<<slope1<<"\tslope2 = "<<slope2<<"\n\n";
                }
            }
        }
    }
}