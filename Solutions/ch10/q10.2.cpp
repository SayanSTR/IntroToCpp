/* 2. The binomial coeffient(n:r) can be defined recursively as (n:r) = (n-1:r) + (n-1:r-1), for
 * n,r > 0 and (n:0) = (n:n) = 1 for all n>=0. Write a function to compute (n:r).
 */

#include <iostream>
#include <math.h>
using namespace std;

int binomial_coeff(int n, int r) {
    if(n<0 || r<0) {
        cout<<"Invalid parameter(less than zero)\n";
        return 0;
    }
    // base case
    if(r==0 || r==n) {
        return 1;
    }
    // recursion
    return binomial_coeff(n-1,r) + binomial_coeff(n-1,r-1);
}

int main()
{
    int n=0, r=0; char comm;
    while (true)
    {
        
        cout<<"Binomial coefficient - Provide n and r: "; cin>>n>>r;
        cout<<binomial_coeff(n,r)<<endl;
        cout<<"'x' to quit else repeat: "; cin>>comm;
        if (comm=='x') break;
    }
}