/* The program you write will likely perform about n multiplication operations 
 * and a similar number of other operations. There is a more efficient way of 
 * writing this program, i.e. using fewer operations for multiplying the same 
 * numbers M; d. Hint: Ask the user to give several digits of M at a time.
 */

/* A: Suppose M = xxxxxxxx(8digits). We'll first take xxxxx and multiply with
 * d. Let the product be yyxxxxx. We'll print xxxxx and store yy as carry in c.
 * In next step well multiply xxx(right) with d and add carry yy to it. Store carry
 * in c, and print the rest.
 */

#include <simplecpp>
main_program
{
    int d, n, M, c=0, i=1;
    cout<<"Enter multiplier(d) : "; cin>>d;
    cout<<"How many digits do the multiplicand have?(n) : "; cin>>n;
    cout<<"Enter 5 digits of the multiplicand everytime, starting from least significant to most significant."<<endl;
    repeat((n/5)+1)
    {
        cout<<"Enter group "<<i<<" of digits: ";
        cin>>M;
        M=d*M+c; cout<<"M : "<<M<<endl;
        c=M/100000;
        cout<<"Digit "<<i<<" of result : "<<M%100000<<endl;
        i++;
    }
}