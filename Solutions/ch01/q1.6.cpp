/* 6. Draw a seven pointed star in the same spirit as above. Note however
 * that there are more than one possible stars. An easy way to gure out
 * the turning angle: how many times does the turtle turn around itself
 * as it draws?
 */

 /*
  */

#include <simplecpp>
main_program
{
  double n, side, extr, intr, rotation, dist;
  turtleSim();
  n = 7.0; side = 100; extr = 360.0/n; intr = 180-extr;
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
