/* 10. Consider a complete binary tree with height h. As you can see, such a tree has 2^(h+1)-1
 * vertices. Our goal now is to write a program that not only draws such a tree, but also
 * assigns a unique number for each vertex, in the range 1 through 2^(h+1)-1. Further, the
 * number should be printed in the picture, slightly to the right of the vertex itself. The
 * simplest numbering is the In-order numbering. In this the vertices are numbered 1 
 * through 2^(h+1)-1 in left to right order. Thus the leftmost leaf would get the number 1,
 * the root of the entire tree would get the number 2^h, and the rightmost leaf would get
 * the number 2^(h+1)-1. You are to modify our program drawing trees without using the
 * turtle so that this numbering is also printed. Hint: It might be useful have a reference
 * argument to the function tree that somehow can be used to decide the number of a node.
 */

#include <simplecpp>

void treeTurtle(Turtle t, int h, float length, float angle, float shrinkage, int &n) {
    //
    if(h==0) {
        Text num(t.getX()-5, t.getY()-5, n); num.setColor(COLOR("red")); num.imprint(); n++;
        return;
    }
    else {
        t.left(angle/2);
        t.forward(length);
        t.right(angle/2);

        treeTurtle(t, h-1, length*shrinkage, angle*shrinkage, shrinkage, n);

        t.left(angle/2);
        t.forward(-length);
        t.right(angle);

        Text num(t.getX()-5, t.getY()-5, n); num.setColor(COLOR("red")); num.imprint(); n++;

        t.forward(length);
        t.left(angle/2);

        treeTurtle(t, h-1, length*shrinkage, angle*shrinkage, shrinkage,  n);

        t.right(angle/2);
        t.forward(-length);
        t.left(angle/2);

    }
}

void treeLine(int h, float hb, float wb, float r_x, float r_y, int &n) {
    //
    if(h==0) {
        Text num(r_x-5, r_y-5, n); num.setColor(COLOR("blue")); num.imprint(); n++;
        return;
    }
    else {
        float Lr_x = r_x - wb/4;
        float Rr_x = r_x + wb/4;
        float Sr_y = r_y - hb/4;

        Line Lbranch(r_x, r_y, Lr_x, Sr_y); Lbranch.imprint();
        Line Rbranch(r_x, r_y, Rr_x, Sr_y); Rbranch.imprint();

        treeLine((h-1), hb-hb/h, wb/2, Lr_x, Sr_y, n);
        Text numR(r_x-5, r_y-5, n); numR.setColor(COLOR("blue")); numR.imprint(); n++;
        //Text numL(Lr_x-5, Sr_y-5, n); numL.setColor(COLOR("blue")); numL.imprint(); n++;
        treeLine(h-1, hb-hb/h, wb/2, Rr_x, Sr_y, n);
        
    }
}

int main()
{   
    int n=1, h; float length, angle, shrinkage;
    cout<<"Level of trees: "; cin>>h;
    cout<<"Length of root branch of 1st tree: "; cin>>length;
    cout<<"Angle between root branches of 1st tree: "; cin>>angle;
    cout<<"Shrinkage : "; cin>>shrinkage;
    
    /* int start, hb, wb;
    cout<<"Height of 2nd tree: "; cin>>hb;
    cout<<"Width of 2nd tree: "; cin>>wb;
    cout<<"Click on root for 2nd tree by line\n"; */

    initCanvas();
    Turtle t; t.left(90);
    //start = getClick();
    treeTurtle(t, h, length, angle, shrinkage, n);
    //t.hide();
    wait(5);
}