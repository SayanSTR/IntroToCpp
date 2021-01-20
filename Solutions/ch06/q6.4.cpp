/* 4. Write a program that takes as input a number y denoting the year and a number d,
 * and prints the date which is the dth day of the year y. Suppose y is given as 2011 
 * and d as 62, then your program should print 3/3/2011".
 */

#include <simplecpp>
main_program
{
    short int d, y, dd;
    cout<<"Enter year: "; cin>>y;
    cout<<"Enter days: "; cin>>d;
    int dSum=0, i=0;
    while(dSum<d)
    {
        dd=d-dSum;
        i++;
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dSum+=31;
            break;
        case 2:
            if(y%4==0) dSum+=29;
            else dSum+=28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dSum+=30;
            break;
        }
    }
    cout<<"The date is : "<<dd<<"/"<<i<<"/"<<y<<endl;
}