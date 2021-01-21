/* 8. Can you write the program to determine if a number is prime without using 
 * a bool variable? Hint: count how many factors the number has.
 */

#include <simplecpp>
main_program
{
    int n; cout<<"Enter number: "; cin>>n;
    int i=2, factors = 0;
    repeat(n-2)
    {
        if(n%i==0) factors++;
        i++;
    }
    if(factors)cout<<n<<" is not a prime number. It has "<<factors<<" factors.\n";
    else cout<<n<<" is a prime number.\n";
}