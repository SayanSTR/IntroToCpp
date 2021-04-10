#include <simplecpp>

void treeLine(int height, float H_b, float W_b, float rx, float ry) // coordinates of the root.
{
    if(height > 0) {
        float LSRx = rx-W_b/4; // x coordinate of root of Left subtree.
        float RSRx = rx+W_b/4; // x coordinate of root of Right subtree.
        float SRy = ry-H_b/height; // y coordinate of roots of subtrees.
        Line Lbranch(rx, ry, LSRx, SRy); Lbranch.imprint();
        Line Rbranch(rx, ry, RSRx, SRy); Rbranch.imprint();
        treeLine(height-1, H_b-H_b/height, W_b/2, LSRx, SRy); // Left Subtree.
        treeLine(height-1, H_b-H_b/height, W_b/2, RSRx, SRy); // Right Subtree.
    }
}

int main(){
    initCanvas();
    treeLine(5,200,200,250,300);
    wait(5);
}
