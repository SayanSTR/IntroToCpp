/* 4. Another idea is to treat the second click to be the highest point reached by the projectile
 * as it moves. For this you may note that if ux,uy are the initial velocities of the
 * projectile in the x,y directions, and g the gravitational acceleration, then maximum
 * height reached is uy^2/2g. The horizontal distance covered by the time the maximum height
 * is reached is ux.uy/g.
 */

#include <simplecpp>
main_program{
    initCanvas("Projectile Motion", 500,500);
    int start = getClick();
    Circle projectile(start / 65536, start % 65536, 5);
    projectile.penDown();
    int top = getClick();
    double s=abs(top/65536 - start/65536), h=(start%65536 - top%65536); //cout<<s<<"\t"<<h<<endl;
    double g=0.1, uy=(-1)*sqrt(2*g*h), ux=(-1)*s*g/uy; //cout<<uy<<"\t"<<ux<<endl;
    repeat(100){
        projectile.move(ux,uy);
        uy += g;
        wait(0.1);
    }
    wait(5);
}