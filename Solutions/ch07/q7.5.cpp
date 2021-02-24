/* 5. Add a "Stop" button to the turtle controller of Section 6.4.1. Modify the program so
 * that it runs until the user clicks on the stop button. Also there should be no limit on
 * the number of commands executed by the user (100 in Section 6.4.1).
 */

#include <simplecpp>
main_program{
    initCanvas();
    const float bFx=100,bFy=100, bLx=250,bLy=100, bSx=400, bSy=100, bWidth=120,bHeight=50;
    Rectangle buttonF(bFx,bFy,bWidth,bHeight), buttonL(bLx,bLy,bWidth,bHeight), buttonS(bSx,bSy,bWidth,bHeight);
    Text tF(bFx,bFy,"Forward"), tL(bLx,bLy,"Left Turn"), tS(bSx,bSy,"Stop");
    Turtle t;
    while(true){
        int clickPos = getClick();
        int x = clickPos/65536;
        int y = clickPos % 65536;
        if(bFx-bWidth/2<= x && x<= bFx+bWidth/2 && bFy-bHeight/2 <= y && y <= bFy+bHeight/2) t.forward(100);
        if(bLx-bWidth/2<= x && x<= bLx+bWidth/2 && bLy-bHeight/2 <= y && y <= bLy+bHeight/2) t.left(10);
        if(bSx-bWidth/2<= x && x<= bSx+bWidth/2 && bSy-bHeight/2 <= y && y <= bSy+bHeight/2) break;
    }
    wait(1);
}