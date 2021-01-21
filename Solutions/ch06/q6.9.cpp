/* 9. A number is said to be perfect if it is equal to the sum of all numbers which are its
 * factors (excluding itself). So for example, 6 is perfect, because it is the sum of its
 * factors 1, 2, 3. Write a program which determines if a number is perfect. It should also 
 * print its factors.
 */

#include <simplecpp>
main_program
{
    int num, i=1, fSum=0;
    cout<<"Enter number to check if it is a perfect number: "; cin>>num;
    repeat(num-1)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
            fSum=fSum+i;
        }
        i++;
    }
    cout<<" fsum = "<<fSum<<endl;
    if(fSum==num) {
        cout<<num<<" is a perfect number.\n";
    }
    else {
        cout<<num<<" is not a perfect number.\n";
    }
}