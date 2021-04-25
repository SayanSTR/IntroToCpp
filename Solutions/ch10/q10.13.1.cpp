/* 13. More commonly, (botanical) trees have a single trunk that rises vertically, and then
 * splits into branches. So you should consider a tree to be "one vertical branch, with two
 * trees growing out of it at an angle". Draw trees expressing this idea as a recursive
 * program. It will be convenient to use the turtle for this. Try out variations, find which
 * trees look realistic.
 */

#include <simplecpp>

void treeTurtle(int h, float length, float angle, float shrinkage) {
    //
    if(h==0) {
        return;
    }
    else {
        forward(length); wait(0.02);
        left(angle); wait(0.02);
        treeTurtle(h-1, length*shrinkage, angle*shrinkage, shrinkage); wait(0.02);
        right(angle); wait(0.02);
        forward(length*(shrinkage/2)); wait(0.02);
        right(angle); wait(0.02);
        treeTurtle(h-1, length*shrinkage, angle*shrinkage, shrinkage); wait(0.02);
        left(angle); wait(0.02);
        forward(-length*(1+shrinkage/2)); wait(0.02);
    }
}

int main()
{   
    int h; float length, angle, shrinkage;
    cout<<"Level of trees: "; cin>>h;
    //cout<<"Length of root branch of tree: "; cin>>length;
    //cout<<"Angle between root branches: "; cin>>angle;
    cout<<"Shrinkage : "; cin>>shrinkage;

    turtleSim();
    left(90); penUp(); forward(50-(canvas_height()/2)); penDown();
    treeTurtle(h, 80, 45, shrinkage);
    wait(5);
}