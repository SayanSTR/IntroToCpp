/* 11. Write a program that reads in 3 characters. If the three characters onsist of two digits
 * with a '.' between them, then your program should print the square of the decimal
 * number represented by the characters. Otherwise your program should print a message
 * saying that the input given is invalid.
 */

#include <simplecpp>
main_program
{
    char a, b, c;
    cout<<"input number with two digits separated with decimal point: \n"; cin>>a>>b>>c;
    if(b=='.' && 47<a && a<58 && 47<c && c<58) {
        float n = (a-48)+(c-48)/10.0;
        cout<<(n*n)<<endl;
    } else {cout<<"Invalid input.\n";}
}