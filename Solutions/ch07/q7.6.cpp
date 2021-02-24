/* 6. Write a program that prints out the digits of a number starting with the least significant
 * digit, going on to the most significant. Note that the least significant digit of a number
 * n is simply n % 10.
 */

#include <simplecpp>
main_program
{
    int n; cin>>n;
    while(n)
    {
        cout<<n%10;
        n=n/10;
    }
    cout<<endl;
}