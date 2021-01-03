/* 3. Draw a chessboard, i.e. a square of side length say 80
 * divided into 64 squares each of sidelength 10.
 */

#include <simplecpp>
main_program
{
  turtleSim();
  // create 8 rows
  repeat(8) {
    // create a row from right to left
    repeat(8) {
      // create single square of sidelength 10
      repeat(4) {
        left(90); forward(10);
      }
      // reposition for next square at left side
      penUp(); forward(-10); penDown();
    }
    // reposition to the start point of next row
    penUp(); forward(80); right(90); forward(10); left(90); penDown();
  }
  wait(3);
}
