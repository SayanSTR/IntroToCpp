/* 11. Another interesting numbering of tree nodes is the Pre-order numbering. The pre-
 * order time of a node is simply the time at which the subtree rooted at that node starts
 * getting drawn. Based on this, the pre-order number of a node is defined to be i if its
 * preorder time is the ith smallest.
 * Modify our tree drawing program (not using turtle) so that it prints the pre-order
 * numbers along with the tree. As examples, note that the root has pre-order number
 * 1, the leftmost leaf the number h+1, and the rightmost leaf the number 2^(h+1)-1.
 */


#include <simplecpp>

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

        Text numR(r_x-5, r_y-5, n); numR.setColor(COLOR("blue")); numR.imprint(); n++;

        Line Lbranch(r_x, r_y, Lr_x, Sr_y); Lbranch.imprint();
        Line Rbranch(r_x, r_y, Rr_x, Sr_y); Rbranch.imprint();

        treeLine((h-1), hb-hb/h, wb/2, Lr_x, Sr_y, n);
        treeLine(h-1, hb-hb/h, wb/2, Rr_x, Sr_y, n);

        //Text numL(Lr_x-5, Sr_y-5, n); numL.setColor(COLOR("blue")); numL.imprint(); n++;
    }
}

int main()
{   
    int n=1, h; //float length, angle, shrinkage;
    cout<<"Level of trees: "; cin>>h;
    //cout<<"Length of root branch of 1st tree: "; cin>>length;
    //cout<<"Angle between root branches of 1st tree: "; cin>>angle;
    //cout<<"Shrinkage : "; cin>>shrinkage;

    int start, hb, wb;
    cout<<"Height of tree: "; cin>>hb;
    cout<<"Width of tree: "; cin>>wb;
    cout<<"Click on root of tree\n";
    

    initCanvas();
    Turtle t; t.left(90);
    start = getClick();
    n=1;
    treeLine(h, hb, wb, start/65536, start%65536, n);
    wait(5);
}