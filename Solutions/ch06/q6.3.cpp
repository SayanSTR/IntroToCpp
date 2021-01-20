/* 3. Write a program which takes as input a number denoting the year, and says whether
 * the year is a leap year or not a leap year.
 */

#include <simplecpp>
main_program
{
    int n; cin>>n;
    (n%4==0) ? cout<<"This is a leap year.\n" : cout<<"This is NOT a leap year.\n";
}