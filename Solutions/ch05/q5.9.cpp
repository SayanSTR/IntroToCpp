/* 9. Write a program that accepts 3 points, say p, q, r. Then the program draws the line
 * joining p, q. Then the line is rotated around the point r, slowly, through one full
 * rotation. The key question here is how to rotate a line through a point which is not
 * its enter. This can be done in two ways. You could calculate the next position of the
 * line, and then reset the line to that position. Alternatively, you an observe that a
 * rotation about an external point such as r can be expressed as a rotation about the
 * center and a translation, i.e. a move. This will require you to calculate the amount of
 * translation.
 */

#include <simplecpp>
main_program {
    int click=0;
    double px, py, qx, qy, rx, ry, d;
    initCanvas("Rotate line about a point", 500, 500);
    cout<<"Click on ends of a line."<<endl;
    click = getClick(); px=click/65536; py=click%65536; Circle p(px,py,2); p.setColor(COLOR("red"));
    click = getClick(); qx=click/65536; qy=click%65536; Circle q(qx,qy,2); q.setColor(COLOR("red"));
    Line l(px, py, qx, qy);
    cout<<"Click on point around which line will rotate."<<endl;
    click = getClick(); rx=click/65536; ry=click%65536; Circle r(rx,ry,5);
    

    px=l.getX(); py=l.getY(); Line rad(rx,ry,px,py); rad.setColor(COLOR("red"));
    d = sqrt(pow((px-rx),2) + pow((py-ry),2));
    cout<<l.getOrientation()<<endl;
    
    double s=sin(10*PI/180), c=cos(10*PI/180);
    repeat(36) {
        // rotate line
        l.rotate(PI/18);
        cout<<l.getOrientation()<<endl;
        // translation
        px -= rx; py -= ry;
        qx=px*c-py*s;
        qy=px*s+py*c;
        qx += rx; qy += ry;
        px=qx; py=qy;
        l.moveTo(px, py); l.imprint();
        wait(0.3);
    }
    wait(3);
}