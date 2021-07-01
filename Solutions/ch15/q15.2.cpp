/* 2. Define a struct for storing dates. Define a function which checks whether a given date
 * is valid, i.e. the month is in the range 1 to 12, and the day is a valid number depending
 * upon the month and the year.
 */

#include <iostream>
#include <math.h>
using namespace std;

struct date {
    short int day;
    short int month;
    short int year;

    bool ifValid() {
        //if(month>0 && month<=12) {
            //if(day>0 && day<=31) {
                switch (month)
                {
                case 2:
                    if(year%4==0) return (day<=29);
                    else return (day<29);
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    return (day<31);
                default:
                    return (day<=31);
                    break;
                }
            //}
        //}
    // ifValid end
    }
// struct end
};

int main()
{
    date d1;
    cout<<"Enter day, month and year\n";
    cin >> d1.day >> d1.month >> d1.year;
    d1.ifValid()? cout<<"Date is valid.\n" : cout<<"Invalid date!\n";
    return 0;
}
