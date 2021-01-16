/* 7. Write a program which multiplies an n digit number M by a 1 digit number d, 
 * where n could be large, e.g. 1000. The input will be given as follows. First 
 * the user gives d, then n and then the digits of M, starting from the least 
 * significant to the most significant. The program must print out the digits of 
 * the product one at a time, from the least significant to the most significant.
 */
#include <simplecpp>
main_program
{
    int d, n, M, c=0, i=1;
    cout<<"Enter multiplier(d) : "; cin>>d;
    cout<<"How many digits do the multiplicand have?(n) : "; cin>>n;
    cout<<"Enter the digits of the multiplicand starting from least significant to most significant."<<endl;
    repeat(n)
    {
        cout<<"Digit "<<i<<": ";
        cin>>M;
        M=d*M+c; cout<<"M : "<<M<<endl;
        c=M/10;
        cout<<"Digit "<<i<<" of result : "<<M%10<<endl;
        i++;
    }
}