/* 2. Here is an infinite product which can be shown to approach 2/pi as the number of terms
 * increases.
 * 2/pi = sqrt(2)/2 x sqrt(2+sqrt(2))/2 x sqrt(2+sqrt(2+sqrt(2)))/2...
 * Write a program that computes the product of the first n terms, where n is specifed as 
 * input. You will need to specify what values your variables take after some t iterations.
 * For this feel free to write something like "numerator has value sqrt(2 + sqrt(...+ sqrt(2))... with
 * sqrt() appearing t times". Write a proof of correctness.
 */
#include <simplecpp>
main_program
{
    int n;
    cout<<"Enter number of terms to evaluate 2/pi : ";
    cin >> n;
    double term, result=1.0;
    repeat(n)
    {
        term = sqrt(2+term);
        result = result * term * 0.5;
    }
    cout<<"Value of 2/pi for "<<n<<" terms is        : "<<result<<endl;
    cout<<"Value of 2/pi using pi=3.14159265 is : "<<2.0/3.14159265<<endl;
}

