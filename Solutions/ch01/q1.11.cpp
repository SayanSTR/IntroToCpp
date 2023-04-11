/**
 * Draw the picture shown in Figure 1.1. As you can see, the picture
 * has 36 repetitions of a basic pattern. Your program should be able
 * to take a number n as input, and draw a picture having n repetitions.
 * Make sure that the lines and the arcs in the pattern connect smoothly.
 */

#include <simplecpp>
main_program
{
    int n = 36, rotSh = 0, rotLn = 0;

    turtleSim();
    penUp();
    forward(100); right(90); forward(100); left(90);
    penDown();  // adjustment10
    repeat(n)
    {
        repeat(270)
        {
            forward(0.1);
            right(1);   //err1
        }
        forward(30);
        repeat(280) //adjustment7
        {
            forward(0.1);
            left(1);    //err3
        }
        forward(30);    //err5
    }

    wait(5);
}

/** Approach I Followed:
 * 1. First draw one circle clockwise.
 * //err: provided rotation 90 at first attempt.
 * 2. After finishing full rotation forward little bit, to look like rotated 'q'.
 * 3. Draw reverse circle at the end. look one unit of border
 * //err: forgot to change right rotation to left. //ob:circles are too big.
 * 4. Try to make the circles smaller. //ac: changed forward length in loop.
 * 5. Try 5 loops of this unit.
 * //err: forgot to put second forward after second circle.
 * //ob: not rotating but going straight line changing sides up and down.
 * 6. Try changing rotation to 270deg instead of 360
 * //ob: instead of straight now going diagonally. sum of first and second
 * // clockwise and anticlockwise rotation decides straight line or overall rotation.
 * 7. Try difference +10 by first rotation 270 and next 280
 * //ob: out of screen.
 * 8. Try reducing angles and forward.
 * //err: repeatition still at 5 instead of 36.
 * 9. Try 36 repetition. //ob: correct result but out of screen.
 * 10. Adjust starting position.
 */