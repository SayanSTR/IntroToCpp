/* 4. Write a function to determine if a number is prime. It should return true or false,
 * i.e. be of type bool.
 */

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {
    bool isPrime = true;
    for(int i=2; i<=n/2 && isPrime; i++) {
        if(n%i==0) isPrime=false;
    }
    return isPrime;
}

int main()
{
    cout<<"Program to check if a number is prime.\nProvide negative number to exit at any time\n";
    int n;
    while (true)
    {
        cin>>n;
        if(n<0) {cout<<"Quitting!\n";break;}
        isPrime(n) ? cout<<n<<" is prime\n" : cout<<n<<" is not prime\n";   // <condition> ? <true> : <false>
    }
}