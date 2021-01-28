/* 3. Modify the projectile motion program so that the velocity is given by a second click.
 * The projectile should start from the first click, and its initial velocity should be in the
 * direction of the second click (relative to the first). Also the velocity should be taken
 * to be proportional to the distance between the two clicks.
 */

#include <simplecpp>
main_program{
    initCanvas("Projectile motion", 500,500);
    int start = getClick();
    Circle projectile(start / 65536, start % 65536, 5);
    projectile.penDown();
    int dir = getClick();
    double vx=abs(start/65536 - dir/65536)/100,vy=-5, gravity=0.1;
    repeat(100){
        projectile.move(vx,vy);
        vy += gravity;
        wait(0.1);
    }
    wait(5);
}
