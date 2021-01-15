/* 4. Write a program that computes the value of an nth degree polynomial 
 * A(x) = a0 + a1.x + a2.x^2 + a3.x^3 +...+ an.x^n
 * Assume that you are given n, then the value x, and then the coefficients 
 * a0, a1,..., an.
 */

#include <simplecpp>
main_program
{
    int n, i=1;
    cout<<"Provide the degree of polynomial : "; cin>>n;
    double x, coeff, xTerm=1.0, result;
    cout<<"Provide the value of x : "; cin>>x;
    cout<<"Enter coefficient of x^0 i.e a0 : "; cin>>coeff;
    result = coeff;
    repeat(n)
    {
        cout<<"Enter coefficient of x^"<<i<<" i.e a"<<i<<" : "; cin>>coeff;
        xTerm = xTerm * x;
        result = result + coeff*xTerm;
        i++;
    }
    cout<<"Value of A(x) for n="<<n<<" and x="<<x<<" is : "<<result<<endl;
}
