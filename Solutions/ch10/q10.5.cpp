/* 5. Consider the recurrence W(n) = W(n-1) + W(n-2) + W(n-3), with W(0) = W(1) = W(2) = 1. Write
 * a recursive program for printing W(n). Also write a loop based program.
 */

#include <iostream>
using namespace std;

int wRec(int n) {
    if(n==0 || n==1 || n==2) return 1;
    else return wRec(n-1) + wRec(n-2) + wRec(n-3);
}

int wLoop(int n) {
    if(n==0 || n==1 || n==2) return 1;
    int wNminus1=1, wNminus2=1, wNminus3=1, wN=0;
    for(int i=0; i<n-2; i++) {
        //
        wN = wNminus1 + wNminus2 + wNminus3;
        wNminus1 = wNminus2; wNminus2 = wNminus3; wNminus3 = wN;
    }
    return wN;
}

int main()
{
    int n; cout<<"Enter n : "; cin>>n;
    cout<<"Value of W("<<n<<") : (a)By recursion: "<<wRec(n)<<",  (b)By loop: "<<wLoop(n)<<endl;

}