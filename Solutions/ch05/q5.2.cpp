/* 2. Plot the graph of y = sin(x) for x ranging in the interval 0 to 4pi. 
 * Draw the axes and mark the axes at appropriate points, e.g. multiples 
 * of pi/2 for the x axis, and multiples of 0.25 for the y axis.
 */

#include <simplecpp>
main_program
{
    initCanvas("Graph of y=sin(x)");
    double dX = (canvas_width()-20)/8, dY = (canvas_height()-20)/8, // unit distances
    oX=20, oY = (canvas_height()-20),   // origin
    x=0, y=0;   // plotting coordinates
    cout<<dX<<"\t"<<dY<<endl;
    // scale such that each dX = 90 degrees
    double gScale = 180/(2*dX); // otherwise graph will be too small and also inaccurate
    // draw axes
    Line lx(oX, oY, (double)canvas_width(), oY); lx.setColor(COLOR("grey")); lx.imprint();
    Line ly(oX, oY, oX, 0); ly.imprint(); ly.setColor(COLOR("grey"));
    // draw graph space
    repeat(8) {
        lx.move(0,-dY); lx.imprint();
        ly.move(dX,0); ly.imprint();
    }
    lx.move(0,4*dY); lx.setColor(COLOR("black")); lx.imprint();
    // now draw the graph of sine
    oY=(oY-4*dY);   // reset origin to middle of graph
    Circle p(oX,oY,5); p.setFill(true); p.setColor(COLOR("blue")); p.penDown();
    repeat(canvas_width()-20) {
        x+=1;
        y=sine(gScale*(x));
        p.moveTo(oX+x,oY-dX*y/3.14159265); // when x=60, y=60*sin(90)=60
        if(_iterator_i%10==0) cout<<"x: "<<x<<"\ty:  "<<y<<endl;
    }
    wait(5);
}
