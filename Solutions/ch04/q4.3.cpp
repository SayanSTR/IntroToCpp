/* 3. Write a program to approximately ompute ex by adding first 15 terms of the series 
 * e^x = x^0/0! + x^1/1! + x^2/2! + x^3/3! + ...
 */

#include <simplecpp>
main_program
{
    int i=1; double x, term=1.0, result=term;
    cout<<"Enter value of x : "; cin>>x;
    repeat(14)
    {
        term = term*x/i;
        result = result + term;
        i++;
    }
    cout<<"Value of e^x for first 15 terms is : "<<result<<endl;
    cout<<"Value of e^x = "<<pow(2.7182818,x)<<endl;
}