/* 1. The factorial of a number n is denoted as n!, and can be defined using the recurrence
 * n! = (n-1)! for n > 0 and 0! = 1. Write a recursive function to compute n!.
 */

#include <iostream>
#include <math.h>
using namespace std;

int fact(int n) {
    if(n==1) return n;
    return n*fact(n-1);
}

int main()
{
    //
    int n=0;char comm;
    while (true)
    {
        
        cout<<"Factorial of : "; cin>>n;
        cout<<fact(n)<<endl;
        cout<<"'x' to quit else repeat: "; cin>>comm;
        if (comm=='x') break;
    }
}