/* 4. You are to write a program which takes as input a sequence of positive integers. 
 * You are not given the length of the sequence before hand, but after all the numbers are
 * given, a -1 is given, so you know the sequence has terminated. You are required to
 * print the 10 largest numbers in the sequence. Hint: use an array of length 10 to keep
 * track of the numbers that are candidates for being the top 10.
 */

#include <iostream>
using namespace std;
int main()
{
    int num[10], minIndex=0, input, i=0;
    for(int i=0; i<10; i++) num[i]=0;
    while(true)
    {
        cin>>input;
        if(input==-1) break;
        if(i<10) {num[i]=input; i++;}
        else
        {
            for(int i=0; i<10; i++) {
                if(num[i]<num[minIndex]) minIndex=i;
            }
            if(input>num[minIndex]) num[minIndex]=input;
        }
    }
    for(int i=0; i<10; i++) cout<<num[i]<<"\t";
    cout<<endl;
}