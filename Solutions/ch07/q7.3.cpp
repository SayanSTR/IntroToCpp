/* 3. Write a program that returns the approximate square root of a non-negative integer.
 * For this exercise define the approximate square root to be the largest integer smaller
 * than the exact square root. You are expected to not use the built-in sqrt or pow
 * commands, of ourse. Your program is expected to do something simple, e.g. check
 * integers in order 1,2,3,... to see if it qualifies to be an approximate square root.
 */

#include <simplecpp>
main_program
{
    int n, i=0;
    cout<<"Enter non-negative integer to find square-root: "; cin>>n;
    if(n<0) {cout<<"Expected non-negative integer!"; return 0;}
    while ((i*i)<=n)
    {
        i++;
    }
    i--;
    cout<<"Square-root of "<<n<<" is "<<i<<".\n";
}
