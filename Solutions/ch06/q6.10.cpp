/* 
 * 10. Write a program which prints all the prime numbers smaller than n, where n is to be
 * read from the keyboard.
 */

#include <simplecpp>
main_program
{
    int num, i=2, step=0;
    cout<<"Enter the number : "; cin>>num;
    repeat(num-2)
    {
        int j=2; bool found=false;
        if(i>2) {
            repeat(i-2) {
                found = found || (i%j==0); step++;
            }
            if(!found) cout<<i<<"\t";
        } else {
            cout <<i<<"\t"; step++;
        }
        i++;
    }
    cout<<"\n Number of computation: "<<step<<endl;
}