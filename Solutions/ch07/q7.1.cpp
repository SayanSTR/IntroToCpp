/* 1. Write a program that prints a conversion table from Centigrade to Fahrenheit, say
 * between 0deg C to 100deg C. Write using while and also using for.
 */

#include <simplecpp>
main_program {
    int c=0; double f=0;
    cout<<"Centigrade \t Fahrenheit"<<endl;
    for(;c<=100;c++)
    {
        f=1.8*c + 32;
        cout<<c<<" \t\t "<<f<<endl;
    }
}