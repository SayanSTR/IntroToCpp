/* 7. Write a program that takes a number n and prints out a number m which has the same
 * digits as m, but in reverse order.
 */

#include <simplecpp>
main_program
{
    int n,rev=0; cin>>n;
    while(n)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev<<endl;
}