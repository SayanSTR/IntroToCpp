/* 2. Write down the Taylor series for f(x) = e^x, noting that f'(x) = e^x. It is convenient
 * to expand around x0 = 0, i.e. consider the MacLaurin series. This series is valid for
 * all values of x, however, it is a good idea to use it on as small values of x as possible.
 * Write a program to compute e^x, and check against the built-in command exp.
 */

#include <simplecpp>
main_program
{
    int x; cout<<"Power of e: "; cin>>x;
    double term=1.0, sum=term, prevSum=0;
    for(int i=1; sum!=prevSum; i++)
    {
        prevSum=sum;
        term *= 1.0*x/i;
        sum += term;
    }
    cout<<"e^"<<x<<" = "<<sum<<endl;
    cout<<"e^"<<x<<" using built-in function = "<<exp(x)<<endl;
}
