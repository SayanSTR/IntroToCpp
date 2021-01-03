/* 2. Draw a sequence of 10 squares, one to the left of another.
 * @author: SayanSTR
 * @date:   03-01-2021
 */

#include <simplecpp>
main_program
{
  turtleSim();
  penUp(); forward(120); penDown();  // so that the drawing doesn't go out of screen
  repeat(10) {  // loop to create 10 squares
    repeat(4) { // loop to create a square
      forward(40);
      left(90);
    }
    wait(0.5);
    penUp(); forward(-40); // to move turtle to start point of next square
    wait(0.5); penDown();
  }
  wait(3);
}
