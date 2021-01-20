/* 5. Write a program that takes as input 3 numbers a; b; and prints out the roots of the 
 * quadratic equation ax^2 + bx + c = 0. Make sure that you handle all possible values of 
 * a,b,c without running into a division by zero or having to take the square root of a 
 * negative number. Even if the roots are complex, you should print them out suitably.
 */

#include <simplecpp>
main_program
{
    double a, b, c;
    cout<<"Coefficient of x^2 (a): "; cin>>a;
    cout<<"Coefficient of x (b): "; cin>>b;
    cout<<"Constant c: "; cin>>c;
    if(a!=0)    // quadratic equation
    {
        double sqrtTerm;
        sqrtTerm = ((b*b)-(4*a*c));
        if(0<=sqrtTerm) {    // real roots
            cout<<"1st root of the equation : "<<((-b+sqrt(sqrtTerm))/(2*a))<<endl;
            cout<<"2nd root of the equation : "<<((-b-sqrt(sqrtTerm))/(2*a))<<endl;
        } else {    // complex roots
            cout<<"1st root of the equation : "<<((-1)*b/(2*a))<<" + "<<(sqrt((-1)*sqrtTerm))/(2*a)<<"i"<<endl;
            cout<<"1st root of the equation : "<<((-1)*b/(2*a))<<" - "<<(sqrt((-1)*sqrtTerm))/(2*a)<<"i"<<endl;
        }
    } else {    // linear equation
        cout<<"Root of the equation : "<<(0-c)/b<<endl;
    }
}