/**
 * Draw a pattern consisting of 7 circles of equal radius: one in the 
 * center and 6 around it, each outer circle touching the central circle 
 * and two others. Try to write a program which minimizes turtle movement. 
 * Your program statements should be chosen to exploit the 
 * symmetry in the pattern.
*/

#include <simplecpp>
main_program {
    int n=6;


    turtleSim();
    // Draw single central circle
    repeat(360) {
        forward(1); right(1);
    }
    // Repeatedly draw 6 cicles in opposite direction around central one
    repeat(6) {
        // Draw cicrle
        repeat(360) {
            forward(1); left(1);
        }
        // Shift to starting position of next circle by arc
        penUp();
        repeat(360/6) {
            forward(1); right(1);
        }
        penDown();
    }

    wait(5);
}