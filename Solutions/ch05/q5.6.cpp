/* 
 * 6. Write a program to produce the following effect. First a square appears on the screen.
 * Then a tiny circle appears at the center. Slowly, the circle grows until it touches the
 * sides of the square. Then both the circle and the square start shrinking until they vanish.
 */

#include <simplecpp>
main_program {
    initCanvas("Grow and shrink effect", 500, 500);
    Rectangle r1(250,250,200,200); wait(0.5);
    int cx = r1.getX(), cy = r1.getY();
    Circle c1(cx, cy, 1); wait(0.5);
    /* short int steps = r1.getWidth()/2 -c1.getRadius();
    repeat(steps) {
        c1.reset(cx,cy,c1.getRadius()+1); wait(0.1);
    }

    repeat(steps) {
        c1.reset(cx,cy,c1.getRadius()-1); wait(0.1);
        r1.reset(cx,cy,r1.getWidth()-2,r1.getHeight()-2);
    } */
    // Grow
    double cScale = r1.getWidth()/(2*c1.getRadius()), rScale = r1.getScale()/20;
    repeat(20) {
        c1.setScale(c1.getScale()+((cScale-1)/20.0)); wait(0.2);
    }
    // Shrink
    cScale = c1.getScale()/20;
    repeat(20) {
        c1.setScale(c1.getScale()-cScale);
        r1.setScale(r1.getScale()-rScale);
        wait(0.2);
    }
    wait(3);
}