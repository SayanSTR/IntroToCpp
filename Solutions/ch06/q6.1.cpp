/* 1. Modify the turtle program so that the user an specify how many pixels the turtle
 * should move, and also by what angle to turn. Thus if the user types "f100 r90 f100
 * r90 f100 r90 f100" it should draw a square.
 */
#include <simplecpp>
main_program
{
    turtleSim();
    char command;
    double val;
    repeat(10) {
        cin>>command; cin>>val;
        switch (command)
        {
        case 'f':
            forward(val);
            break;

        case 'r':
            right(val);
            break;

        case 'l':
            left(val);
            break;
        
        default:
            cout<<"Not a valid input.\n";
            break;
        }
    }
}