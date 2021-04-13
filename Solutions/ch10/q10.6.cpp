/* 6. Let Bn denote the number of bran hes in the re ursion tree for Vn. Thus B6 = 14,
 * considering Figure 10.5. Note that each branch ends in a call to Virahanka, hence B(n)
 * gives a good estimate of the number of operations needed to compute V(n). (a) Write a
 * recurrence for B(n) and use it to write a program that computes B(n). What are the base
 * cases for this? Make sure your answer matches the branches in the trees of Figure 10.5.
 * (b) Argue using induction that B(n) >= 2^(n/2)for n >= 3.
 */

#include <iostream>
using namespace std;

int B(int n) {
    if(n==1 || n==2) return 0;
    else return B(n-1) +1 + B(n-2) +1;
}

int main()
{
    int n; cout<<"N: "; cin>>n;
    cout<<B(n)<<endl;
}