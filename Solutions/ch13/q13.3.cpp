/* 3. Suppose we want to find a histogram for which the width of the intervals for which we
 * want the counts are not uniform. Say each value is a real number between 0 (inclusive)
 * and 1 (exclusive). Between 0 and 0.25, our intervals are of width 0.05, i.e. we want
 * a ount of how many values are between 0 and 0.05, then 0.05 and 0.1, and so on.
 * Between 0.25 and 0.75 our intervals are of width 0.025, i.e. we want to know how
 * many values are between 0.25 and 0.275, then 0.275 and 0.3, and so on. Finally,
 * between 0.75 and 1, our intervals are of width 0.05. Write a program that provides the
 * histogram for these ranges.
 */

/*
0.000 - 0.250 : 0.050   05   0.05 0.10 0.15 0.20 0.25
0.250 - 0.750 : 0.025   20   .275 .300 .325 .350 .375 .400 .425 .450 .475 .500 .525 .550 .575 .600 .625 .650 .675 .700 .725 .750
0.750 - 1.000 : 0.050   05   0.80 0.85 0.90 0.95 1.00
*/

#include <iostream>
using namespace std;
int main()
{
    int n=0, d=0, hist[30];
    float max_value=0.000;
    for(int i=0; i<30; i++) hist[i]=0;
    cout<<"No of data : "; cin>>n;
    // create histogram
    for(int i=0; i<n; i++)
    {
        float value; cin>>value;
        if(value<0.250) {d = value/0.05; hist[d]++;}
        else if(value<0.750) {d= 5 + (value-0.25)/0.025; hist[d]++;}
        else if(value<1.000) {d= 25 + (value-0.750)/0.05; hist[d]++;}
    }
    // print array hist[30]
    for(int i=0; i<30; i++) cout<<hist[i]<<"\t";
    cout<<endl;
    // check maximum value in histogram
    for(int i=0; i<30; i++)
    {
        if(hist[i]>max_value) max_value=hist[i];
    }

    d = ((max_value*1.0/10)+1.0); cout<<"max_value="<<max_value<<" d="<<d<<endl;

    for(int i=10; i>=0; i--)
    {
        cout<<i*d<<"\t|";
        for(int j=0; j<30; j++)
        {
            if(hist[j]>=i*d) cout<<" x ";
            else cout<<"   ";
        }
        cout<<endl;
    }
}