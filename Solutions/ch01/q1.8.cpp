/* 8. Read in the lengths of the sides of a triangle and draw the triangle.
 * You will need to know and use trigonometry for solving this.
 */

#include <simplecpp>
main_program
{
  double A, B, C, a, b, c;
  turtleSim();
  cout << "Enter lengths of sides of the triangle :" << endl;
  cin >> A >> B >> C;
  a = acos( (pow(B,2) + pow(C,2) - pow(A,2))/(2*B*C) );
  b = acos( (pow(A,2) + pow(C,2) - pow(B,2))/(2*A*C) );
  c = acos( (pow(A,2) + pow(B,2) - pow(C,2))/(2*A*B) );

  forward(A); left(180 - c*180/3.14159); wait(0.5);
  forward(B); left(180 - a*180/3.14159); wait(0.5);
  forward(C); left(180 - b*180/3.14159); wait(0.5);
  wait(2);
}
