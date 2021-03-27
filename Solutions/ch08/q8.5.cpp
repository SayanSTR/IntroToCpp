/* 5. Simpson's rule gives the following approximation of the area under the urve of a
 * function f: Integration a to b f(x)dx = {(b-a)/6}.[f(a) + 4.f((a+b)/2)) + f(b)]
 * Use this rule for each strip to get another way to find the natural log.
 */

#include <simplecpp>
main_program{
    // Read input
    float x; cout<<"For ln(x) x(positive and non-zero) = "; cin >> x;   // will calculate ln(x)
    while (x<=0)
    {float x; cout<<"Invalid input! enter value again.\nFor ln(x) x(must be positive and non-zero) = "; cin >> x;} 
    
    int n; cout<<"Divisions(must be even and non-zero) = "; cin >> n;   // number of sections to use
    while (n<=0 || n%2!=0)
    {cout<<"Invalid input! enter again.\nDivisions(must be even and non-zero) = "; cin >> n;}
    
    // Simpson's Rule
    float w = (x-1)/n;  // width of each rectangle
    float area=0;       // will contain ln(x) at the end.
    for(int i=0; i <= n; i++)
    {
        if(i==0 || i==n) area+= 1/(1+i*w);  // f(a) and f(b)
        else if(i%2!=0) area+= 4/(1+i*w);   // for f(i): i=1,3,5,..,(x-1)
        else area+= 2/(1+i*w);              // for f(i): i=2,4,6,..,(x-2)
    }
    area*= (w/3);   // for (h/3)*[f(a)+...+f(b)]

    // Output
    cout << "Natural log, from integral: "<< area << endl;
    cout<<"Natural log, built-in function: "<< log(x)<<endl;
}