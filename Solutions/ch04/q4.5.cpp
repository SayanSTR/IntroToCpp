/* 5. Evaluate the polynomial, but this time assume that you are given the 
 * coefficients in the order a(n), a(n-1),..., a(0).
 */

#include <simplecpp>
main_program
{
    int n;
    cout<<"Provide the degree of polynomial : "; cin>>n;
    int i=n;
    double x, coeff, xTerm=1.0, result=0;
    cout<<"Provide the value of x : "; cin>>x;
    repeat(n)
    {
        xTerm = xTerm*x;
    }
    repeat(n)
    {
        cout<<"Enter coefficient of x^"<<i<<" i.e a"<<i<<" : "; cin>>coeff;
        result = result + coeff*xTerm;
        xTerm = xTerm / x;
        i--;
    }
    cout<<"Enter coefficient of x^0 i.e a0 : "; cin>>coeff;
    result = result + coeff;
    cout<<"Value of A(x) for n="<<n<<" and x="<<x<<" is : "<<result<<endl;
}
