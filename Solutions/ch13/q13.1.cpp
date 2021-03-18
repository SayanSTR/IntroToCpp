/* 1. Suppose the roll numbers in the lass do not go from 1 to the maximum number of
 * students, but are essentially arbitrary numbers (because perhaps they identify the year
 * in which the student enters, or the program that the student belongs to, and so on. Write 
 * the marks display program for this case. Assume that for each student first the
 * roll number is typed in, and then the marks. Also assume that at the beginning the
 * number of students is given.
 */

/* 2. Write the program to display who got the maximum marks for the ase above, i.e. 
 * when the roll numbers are arbitrary integers.
 */

#include <iostream>
using namespace std;
int main()
{
    int marks[100][2], nActual, maxIndex=0;
    cout<<"No of students: "; cin>>nActual;
    for(int i=0; i<nActual; i++) cin>>marks[i][0]>>marks[i][1];

    for(int i=1; i<nActual; i++)
    {
        if(marks[i][1]>marks[maxIndex][1]) maxIndex=i;
    }

    cout<<"Roll no of students with highest marks: \n";
    for (int i = 0; i < nActual; i++)
    {
        if(marks[i][1]==marks[maxIndex][1]) cout<<marks[i][0]<<endl;
    }
    
}