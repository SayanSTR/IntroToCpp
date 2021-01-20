/* 1. Draw an 8 x 8 hessboard having red and blue squares. Hint: Use the imprint 
 * command. Use the repeat statement properly so that your program is compact.
 */
#include <simplecpp>
main_program
{
    int i=0,j=0;
    initCanvas("Chessboard");
    Rectangle border(230,190,320,320);
    Rectangle r(50,50,40,40);
    repeat(8)
    {
        r.show();
        repeat(8)
        {
            r.move(40,0);
            if((i+j)%2==0) {r.setFill(false);/*r.setColor(COLOR("white"));*/}
            else {r.setFill(true);/*r.setColor(COLOR("black"));*/}
            r.imprint();
            j++;
            wait(0.2);
        }
        r.hide();
        r.move(-320,40);
        j=0; i++;
    }
    wait(3);
}