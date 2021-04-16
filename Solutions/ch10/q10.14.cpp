/* 14. Write a function draw_Hem that draws the recursion tree for calls to Virahanka, i.e.
 * draw_Hem(6) should be able to construct the tree shown in Figure 10.5.
 */


#include <simplecpp>

void draw_Hem(int h, float hb, float wb, float r_x, float r_y, int &n) {
    //
    if(h==1 || h==2) {
        Text num(r_x-5, r_y-5, h); num.setColor(COLOR("blue")); num.imprint(); n++;
        return;
    }
    else {
        Text numR(r_x-5, r_y-5, h); numR.setColor(COLOR("blue")); numR.imprint(); n++;
        float Lr_x = r_x - wb/4;
        float Rr_x = r_x + wb/4;
        float Sr_y = r_y + hb/4;

        Line Lbranch(r_x, r_y, Lr_x, Sr_y); Lbranch.imprint();
        Line Rbranch(r_x, r_y, Rr_x, Sr_y); Rbranch.imprint();

        draw_Hem(h-1, hb-hb/h, wb/2, Lr_x, Sr_y, n);
        
        //Text numL(Lr_x-5, Sr_y-5, n); numL.setColor(COLOR("blue")); numL.imprint(); n++;
        draw_Hem(h-2, hb-hb/h, wb/2, Rr_x, Sr_y, n);
        
    }
}

int main()
{   
    int n=1, h; //float length, angle, shrinkage;
    cout<<"Level of trees: "; cin>>h;
    //cout<<"Length of root branch of 1st tree: "; cin>>length;
    //cout<<"Angle between root branches of 1st tree: "; cin>>angle;
    //cout<<"Shrinkage : "; cin>>shrinkage;

    /* int start, hb, wb;
    cout<<"Height of tree: "; cin>>hb;
    cout<<"Width of tree: "; cin>>wb;
    cout<<"Click on root of tree\n"; */
    

    initCanvas();
    //start = getClick();
    n=1;
    draw_Hem(h, canvas_height()-80, canvas_width()-40, canvas_height()/2, 50, n);
    wait(5);
}