/* 2. Write a program that reads 3 numbers and prints them in non-decreasing order.
 */

#include <simplecpp>
main_program
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a<=b && a<=c) {
        if(b<=c) {
            cout<<"R: "<<a<<b<<c<<endl;
        } else
        {
            cout<<"R: "<<a<<c<<b<<endl;
        }
    } else if (b<=a && b<=c) {
        if (a<=c)
        {
            cout<<"R: "<<b<<"\t"<<a<<"\t"<<c<<endl;
        } else
        {
            cout<<"R: "<<b<<"\t"<<c<<"\t"<<a<<endl;
        }
    } else
    {
        if (a<=b)
        {
            cout<<"R: "<<c<<"\t"<<a<<"\t"<<b<<endl;
        } else
        {
            cout<<"R: "<<c<<"\t"<<b<<"\t"<<a<<endl;
        }
    }
}