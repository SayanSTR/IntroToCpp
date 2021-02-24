/* 8. A natural number is said to be a palindrome if the sequence its digits is the same
 * whether read left to right or right to left. Write a program to determine if a given
 * number is a palindrome.
 */

#include <simplecpp>
main_program
{
    int n,num,rev=0; cin>>n; num=n;
    while(num)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if (n==rev) cout<<n<<" is a palindrome."<<endl;
    else cout<<n<<" is not a palindrome.\n";
    
}
