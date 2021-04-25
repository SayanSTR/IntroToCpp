/* 15. The tree drawn in Figure 10.2 is called a complete binary tree. Binary, because at
 * each branching point there are exactly 2 branches, or at the top, where they are no
 * branches. Complete, because all branches go to the same height. You could have an
 * in complete binary tree also, say you only have one branch on one side and the entire
 * tree on the other.
 * Write a program which takes inputs from the user and draws any binary tree. Suppose
 * to any request the user will only answer 0 (false) or (true). Devise a system of questions
 * using which you can determine how to move the turtle. Make sure you ask as few
 * questions as possible.
 */

#include <simplecpp>

void treeTurtle(int h, float length, float angle=90, float shrinkage=0.8) {
    if(h==0) return;
    else {
        bool draw=true;
        cout<<"Draw left subtree? (true/false):"; cin>>draw;
        if(draw) {
            left(angle/2);
            forward(length);
            right(angle/2);

            treeTurtle(h-1, length*shrinkage, angle*shrinkage, shrinkage);

            left(angle/2);
            forward(-length);
            right(angle/2);
        }

        cout<<"Draw right subtree? (true/false):"; cin>>draw;
        if(draw) {
            right(angle/2);
            forward(length);
            left(angle/2);

            treeTurtle(h-1, length*shrinkage, angle*shrinkage, shrinkage);

            right(angle/2);
            forward(-length);
            left(angle/2);
        }
    }
}

int main()
{   
    int n=1, h; float length, angle, shrinkage;
    cout<<"Level of trees: "; cin>>h;
    cout<<"Length of root branch of 1st tree: "; cin>>length;
    cout<<"Angle between root branches of 1st tree: "; cin>>angle;
    cout<<"Shrinkage : "; cin>>shrinkage;

    initCanvas();
    turtleSim();
    //Turtle t; t.
    left(90);
    treeTurtle(h, length, angle, shrinkage);
    wait(5);
}