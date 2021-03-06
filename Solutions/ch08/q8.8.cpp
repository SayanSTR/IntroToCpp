/* 8. Write a program to nd ar sin(x) given x.
 */

/* Answer: Using Maclaurin expansion of arcsin:
 * x + (1/2)(x^3/3) + (1.3/2.4)(x^5/5) + (1.3.5/2.4.6)(x^7/7) + (1.3.5.7/2.4.6.8)(x^9/9)...
 */

#include <simplecpp>
main_program
{
    int n;
    double x, term, sum;

    cout<<"Enter x (range:[-1,1]): "; cin>>x;
    while (x<(-1) || x>1)
    { cout<<"Out of range! Try again!\nEnter x (range:[-1,1]): "; cin>>x; }
    
    cout<<"Enter number of terms to use : "; cin>>n;
    term = x; sum = term;
    for(int i=1; i<n; i++)
    {
        term *= (x*x) * (2*i -1)/(2*i);
        sum += term/(2*i +1);
    }
    cout<<"arcsin("<<x<<") using Maclaurin expansion = "<<sum<<endl;
    cout<<"arcsin("<<x<<") using built-in function = "<<asin(x)<<endl;
}