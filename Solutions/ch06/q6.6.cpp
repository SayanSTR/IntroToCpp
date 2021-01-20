/* 6. Suppose we wish to write a program that plays cards. The first step in such a program
 * would be to represent cards using numbers. In a standard deck, there are 52 cards,
 * 13 of each suite. There are 4 suites: spades, hearts, diamonds, and clubs. The 13
 * cards of each suit have the denomination 2,3,4,5,6,7,8,9,10,J,Q,K,A, where the last 4
 * respectively are short for jack, queen, king and ace. It is natural to assign the numbers
 * 3,2,1,0 to the suites respectively. The denominations 2-10 are assigned numbers same
 * as the denomination, whereas the jack, queen, king, and ace are respectively assigned
 * the numbers 11, 12, 13, and 1 respectively. The number assigned to a card of suite s
 * and denomination d is then 13s + d. Thus the club ace has the smallest denomination,
 * 1, and the spade king the highest, 52. Write a program which takes a number and
 * prints out what card it is. So given 20, your program should print "7 of diamonds", or
 * given 51, it should print "queen of spades".
 */

#include <simplecpp>
main_program
{
    short int n, d, s;
    cout<<"Enter number to know which card it is : "; cin>>n;
    if(0<n && n<53) {
        s=(n-1)/13; d=((n-1)%13)+1;
        cout<<"The card is ";
        switch (d)
        {
        case 1:
            cout<<"Ace"; break;
        case 2:
            cout<<"2"; break;
        case 3:
            cout<<"3"; break;
        case 4:
            cout<<"4"; break;
        case 5:
            cout<<"5"; break;
        case 6:
            cout<<"6"; break;
        case 7:
            cout<<"7"; break;
        case 8:
            cout<<"8"; break;
        case 9:
            cout<<"9"; break;
        case 10:
            cout<<"10"; break;
        case 11:
            cout<<"Jack"; break;
        case 12:
            cout<<"Queen"; break;
        case 13:
            cout<<"King"; break;
        }
        cout<<" of ";
        switch (s)
        {
        case 0:
            cout<<"Clubs."; break;
        case 1:
            cout<<"Diamonds."; break;
        case 2:
            cout<<"Hearts."; break;
        case 3:
            cout<<"Spades."; break;
        }
        cout<<endl;
    } else {
        cout<<"Unvalid number. Valid range is 1 to 52.\n";
    }
}