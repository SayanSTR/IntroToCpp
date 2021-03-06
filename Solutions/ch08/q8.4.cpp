/* 4. A more accurate estimate of the area under the curve is to use trapeziums rather than
 * rectangles. Thus the area under a curve f(u) in the interval [p,q] will be approximated
 * by the area of the trapezium with corners (p,0), (p,f(p)), (q.f(q)), (q,0). This area
 * is simply (f(p)+f(q))*(q-p)/2. Use this to compute the natural logarithm.
 */

#include <simplecpp>
main_program{
    float x; cout<<"Value of x : "; cin >> x;   // will calculate ln(x)
    int n; cout<<"Number of rectangles to use : "; cin >> n;    // number of rectangles to use
    float w = (x-1)/n;  // width of each rectangle
    float area = 0, fp=1, fq=0;     // will contain ln(x) at the end.
    for(int i=0; i < n; i++)
    {
        fq= 1/(1+(i+1)*w);
        area = area + (fp+fq)*w/2;
        fp=fq;
    }
    cout << "Natural log, from integral: "<< area << endl;
    cout<<"Natural log, built-in function: "<< log(x)<<endl;
}
