/* 12. Write a program that takes a natural number and prints out its prime factors.
 */

#include <simplecpp>
main_program
{
    int n; cin>>n;
    while (n<0)
    {
        cout<<"Invalid input. Enter natural number again: ";
        cin>>n;
    }
    int d=2;
    cout<<"Prime factors of "<<n<<" are:\n";
    while (n>1)
    {
        if(n%d==0) {n=n/d; cout<<d<<"  ";}
        else {d++;}
    }
    cout<<endl;
}