/* 5. A pentagram is a ve pointed star, drawn without lifting the pen.
 * Specically, let A,B,C,D,E be 5 equidistant points on a circle, then
 * this is the figure A-C-E-B-D-A. Draw this.
 */
 /* ans: In this solution we calculate internal angle of the two sides
  * from each vertex and store it as "rotation". Then we first align
  *
  */

#include <simplecpp>
main_program
{
  double n, side, extr, intr, rotation, dist;
  turtleSim();
  n = 5.0; side = 100; extr = 360.0/n; intr = 180-extr;
  rotation = extr/2.0; // rotation = (180-int)/2
  // cout<<cos(36)<<endl; // argument for cos() should be in radian.
  dist = 2*side*(cosine(rotation)); // to use degree use cosine()
  cout << "n = " << n <<"\nside = "<<side<<"\nexternal = "<<extr<<"\ninternal = "<<intr<<"\nrotation = "<<rotation<<"\ndist = "<<dist<<endl;
  wait(0.5);
  left(extr+rotation); wait(0.5);
  repeat(n)
  {
    forward(dist); right(180); right(rotation);
    wait(0.5);
  }
  wait(3);
}
