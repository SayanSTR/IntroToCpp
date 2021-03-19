/* 5. Suppose in the previous problem you are asked to report which are the 10 highest
 * values in the sequence, and how frequently they appear. Write a program which does this.
 */

#include <iostream>
using namespace std;
int main()
{
    int num[10], freq[10], minIndex=0, input, i=0;
    for(int i=0; i<10; i++) num[i]=freq[i]=0;   //initialize
    while(true) // continue until encounter -1
    {
        cin>>input; // read input
        if(input==-1) break;
        // For first 10 input cannot have for loop as may have less than 10 input
        if(i<10) {num[i]=input; freq[i]++; i++;}
        // When array is filled after first 10 input
        else
        {
            bool exist = false;
            // check if number already exists
            for(int i=0; i<10; i++) {
                // check if number already exists and increase freq
                if(num[i]==input) {exist = true; freq[i]++;}
                // find lowest number to replace
                if(num[i]<num[minIndex]) minIndex=i;
            }
            // if not present in num[] and larger than smallest
            if((!exist)&&(input>num[minIndex]))
            {
                // then store in place of smallest and set freq to 1
                num[minIndex]=input; freq[minIndex]=1;
            }
        }
    }
    for(int i=0; i<10; i++) cout<<"Num:"<<num[i]<<"\tFreq:"<<freq[i]<<endl;
    cout<<endl;
}