/* 13. More commonly, (botanical) trees have a single trunk that rises vertically, and then
 * splits into branches. So you should consider a tree to be "one vertical branch, with two
 * trees growing out of it at an angle". Draw trees expressing this idea as a recursive
 * program. It will be convenient to use the turtle for this. Try out variations, find which
 * trees look realistic.
 */

#include <simplecpp>

void treeTurtle(Turtle t, Text &num, int h, float length, float angle, float shrinkage, int &n) {
    //
    if(h==0) {
        t.scale(0.4); 
        if((n*5)%765 <= 255) t.setColor(COLOR((n*5)%255,0,0));
        else if((n*5)%765 <= 510) t.setColor(COLOR(0,(n*5)%255,0));
        else if((n*5)%765 <= 765) t.setColor(COLOR(0,0,(n*5)%255));
        t.imprint();
        //Text num(t.getX()-5, t.getY()-5, n/2); num.setColor(COLOR("red")); num.moveTo(50,50); //num.imprint();
        n++; num.reset(50,50,n);
        return;
    }
    else {
        t.forward(length); wait(0.01);
        Turtle t1 = t; wait(0.01);
        t.right(angle*shrinkage/2); wait(0.01);
        t1.left(angle*shrinkage/2); wait(0.01);

        treeTurtle(t, num, h-1, length*shrinkage, angle*shrinkage, shrinkage, n); wait(0.01);

        // t.left(angle/2);
        // t.forward(-length);
        // t.right(angle);
        //Text num(t.getX()-5, t.getY()-5, n); num.setColor(COLOR("red")); num.imprint();
        //n++;
        // t.forward(length);
        // t.left(angle/2);

        treeTurtle(t1, num, h-1, length*shrinkage, angle*shrinkage, shrinkage,  n); wait(0.01);
        //n++;
        // t.right(angle/2);
        // t.forward(-length);
        // t.left(angle/2);
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
    Text num(50, 50, 0); num.setColor(COLOR("red")); num.scale(2);
    Turtle t; t.penUp(); t.move(0, canvas_height()/2.0-50); t.penDown(); t.left(90);
    //start = getClick();
    treeTurtle(t, num, h, length, angle, shrinkage, n);
    //t.hide();
    wait(5);
}