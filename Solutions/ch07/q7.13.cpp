/* 13. *Write a program that reads in a sequence of characters, one at a time, and stops
 * as soon as it has read the contiguous sequence of characters 'a', 'b', 'r', 'a', 'c', 'a',
 * 'd', 'a', 'b', 'r', 'a', i.e. the string "abracadabra". Hint: After you have read a certain
 * number of characters, what exactly do you need to remember? You do you need to
 * remember the entire preceding sequence of characters, even the last few characters
 * explicitly. Figure out what is needed, and just remember that in your program.
 */

#include <simplecpp>
main_program
{
    char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
    cin>>c0>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10;
    while (!(c0=='a' && c1=='b' && c2=='r' && c3=='a' && c4=='c' && c5=='a' && c6=='d' && c7==c0 && c8==c1 && c9==c2 && c10==c3))
    {
        c0=c1; c1=c2; c2=c3; c3=c4; c4=c5; c5=c6; c6=c7; c7=c8; c8=c9; c9=c10;
        cin>>c10;
    }
    cout<<"\n"<<c0<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<"!"<<endl;
}
