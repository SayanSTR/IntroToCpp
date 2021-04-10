#include <simplecpp>

void tree(int height, float length, float angle, float shrinkage)
// pre-condition: turtle is at root, pointing up.
// post-condition: same
{
    // 1. draw the left branch
    if(height == 0) return;
    left(angle/2); //wait(0.8);
    forward(length); //wait(0.8);
    // 2. draw the left (sub)tree.
    right(angle/2); //wait(0.8);
    tree(height-1, length*shrinkage, angle*shrinkage, shrinkage); //wait(0.8);
    // 3. go back to the root
    left(angle/2); //wait(0.8);
    forward(-length); //wait(0.8);
    // 4. draw the right branch
    right(angle); //wait(0.8);
    forward(length); //wait(0.8);
    // 5. draw right (sub)tree.
    left(angle/2); //wait(0.8);
    tree(height-1,length*shrinkage, angle*shrinkage, shrinkage); //wait(0.8);
    // 6. go back to root
    right(angle/2); //wait(0.8);
    forward(-length); //wait(0.8);
    // 7. ensure post condition
    left(angle/2); //wait(0.8);
}

int main()
{
    //
    turtleSim();
    left(90);
    tree(5,100,90,0.7);
    wait(5);
}