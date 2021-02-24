/* 9. Write a program that takes as input a natural number x and returns the smallest
 * palindrome larger than x.
 */

#include <simplecpp>
main_program
{
    int n,num,rev=0; bool isPal=false;
    cin>>n; num=n;
    while(!isPal)
    {
        int diff=num-n;
        while(num)
        {
            rev=rev*10+num%10;
            num=num/10;
        }
        num=n+diff;
        /*cout<<num<<"\t"<<rev<<"\t"<<diff<<endl;*/
        if (num==rev)
        {
            cout<<"Smallest palindrome larger than "<<n<<" is "<<num<<".\n";
            isPal=true;
        }
        rev=0; num++;
    }
}
