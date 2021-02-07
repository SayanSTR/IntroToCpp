/* 8. Write a program that accepts 3 points on the canvas (given by licking) and then draws
 * a circle through those 3 points.
 */

#include <simplecpp>
main_program {
    initCanvas("Circle from 3 points", 500, 500);
    double ax, ay, bx, by, cx, cy, d, ox, oy, r; int click;
    cout<<"Click on three points on a circle."<<endl;
    click = getClick(); ax=click/65536; ay=click%65536;
    Circle c1(ax,ay,2);
    click = getClick(); bx=click/65536; by=click%65536;
    Circle c2(bx,by,2);
    click = getClick(); cx=click/65536; cy=click%65536;
    Circle c3(cx,cy,2);
    
    d = 2*(ax*(by-cy) + bx*(cy-ay) + cx*(ay-by));
    ox = ( ((ax*ax)+(ay*ay))*(by-cy) + ((bx*bx)+(by*by))*(cy-ay) + ((cx*cx)+(cy*cy))*(ay-by) )/d;
    oy = ( ((ax*ax)+(ay*ay))*(cx-bx) + ((bx*bx)+(by*by))*(ax-cx) + ((cx*cx)+(cy*cy))*(bx-ax) )/d;
    r = sqrt((pow((ax-ox),2))+(pow((ay-oy),2)));
    Circle c(ox, oy, r);
    wait(3);
}
