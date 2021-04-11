/* 4. Deduce the general structure of Hilbert space filling curves by observing Figure 10.4.
 * Draw a picture (on paper) showing how H(n) is composed of one or more H(n-1)
 * curves. This should be in the style of Figure 10.3. Write a turtle based program to draw a
 * Hilbert space filling curve H(n) given n.
 * Follow the general scheme we used in Section 10.2, i.e. begin by stating the pre and
 * post conditions for the turtle for drawing H(n). Try to draw the curve without lifting
 * the pen or overdrawing.
 * You may find the following fact useful. Suppose a certain function f draws some figure
 * F. Then if we replace every turning angle theta in f by -theta , then we will get a figure that
 * is a mirror image of F.
 */

#include <simplecpp>

void hilbertCurve(int n, int dir, int l) {
    /* Draws Hilbert Curve of level n. */
    // base case : n = 1
    /**/
    if(n==1) {
        left(dir*90); wait(0.1); forward(l); wait(0.1);
        right(dir*90); wait(0.1); forward(l); wait(0.1);
        right(dir*90); wait(0.1); forward(l); wait(0.1);
        left(dir*90); wait(0.1);
    }
    /**/
    // Same pattern followed in-between call to hilbertCurve()
    /*if(n==0) return;*/
    else {
        wait(0.1);
        left(dir*90); wait(0.1);
        hilbertCurve(n-1, -1*dir, l); wait(0.1);

        forward(l); wait(0.1);
        right(dir*90); wait(0.1);
        hilbertCurve(n-1, 1*dir, l); wait(0.1);

        forward(l); wait(0.1);
        hilbertCurve(n-1, 1*dir, l); wait(0.1);

        right(dir*90); wait(0.1);
        forward(l); wait(0.1);
        hilbertCurve(n-1, -1*dir, l); wait(0.1);

        left(dir*90); wait(0.1);
    }
}

int main() {
    //
    int n; cout<<"Level of hilbert curve: "; cin>>n;
    turtleSim();

    hilbertCurve(n,1,10);
    wait(3);
}