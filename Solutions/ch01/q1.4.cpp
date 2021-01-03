/* 4. If you draw a polygon with a large number of sides, say 100,
 * then it will look essentially like a circle. In fact this is how
 * circles are drawn: as a many sided polygon. Use this idea to
 * draw the numeral 8 { two circles placed tangentially one above the other.
 */

 #include <simplecpp>
 main_program
 {
   turtleSim();
   // draw upper circle
   repeat(100)
   {
     forward(5);
     left(360.0/100);
   }
   wait(1);
   // adjustment for the last rotation
   right(360.0/100);
   // draw lower circle
   repeat(100)
   {
     forward(5);
     right(360.0/100);
   }
   wait(3);
 }
