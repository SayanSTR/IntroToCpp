/* 16. Consider the points (i,j) where 0<i, j<n for some constant n, say n = 10. We want
 * to walk from (0,0) to (n-1,n-1) taking exactly n-1 unit steps in the positive x
 * direction, and exactly n-1 unit steps in the positive y direction. It is acceptable to
 * take order the steps in the x and y direction as we wish, i.e. we may alternate them
 * or take all x steps first and so on. We must take a total of 2n-2 steps, of which n-1
 * must be along the x direction. Thus the total number of ways of choosing, which is
 * also the number of distinct paths that we can follow, is (2n-2:n-1). With each path we can
 * associate a 2n-2 bit number, whose j-th least signifiant bit is 0 if the j-th step on the
 * path is in the x-direction, and 1 if the j-th step is in the y-direction.
 * Write a program that takes as input integers n,p and prints out the pth largest number
 * in the set of all paths. Hint: How many paths will have a 0 in the most signicant bit?
 */

#include <simplecpp>

int intToBin(int num, int pos=1, int n=0) {
    int binary=0;
    while (num/2>0)
    {
        //cout<<num%2<<" "<<pos<<" ";
        binary = binary + pos*(num%2); n++;
        num = num/2; pos=pos*10;
        //cout<<binary<<" "<<n<<" "<<num<<endl;
    }
    binary = binary + pos*(num%2); n++;
    cout<<n<<" bit number ";
    return binary;
}


void path(Turtle &t, int n, int p, int &count, int len, int x, int y) {
    //
    if(x==0 && y==0) {
        count++;
        return;
    }

    // if vertical move possible
    if(y>0) {
        // go y-direction
        t.left(90); wait(0.3); t.forward(len); wait(0.3); t.right(90); wait(0.3);

        path(t, n-1, p, count, len, x, y-1); //wait(0.3);

        if(count==p) {
            cout<<1; return;
        }
        // back to previous point
        t.left(90); wait(0.3); t.forward(-len); wait(0.3); t.right(90); wait(0.3);
    }

    // if no vertical move possible or back after vertical move
    if(x>0) {
        // go x-direction
        t.forward(len); wait(0.3);

        path(t, n-1, p, count, len, x-1, y); //wait(0.3);

        if(count==p) {
            cout<<0; return;
        }
        // back to previous point
        t.forward(-len); wait(0.3);
    }
}

int main()
{
    //
    int n, p, count=0, len; cout<<"n, p, len:";
    cin >> n >> p >>len;
    initCanvas("2n Square Grid Paths", 600, 600);
    Turtle t; t.penUp(); t.moveTo(20,580); t.penDown();
    path(t,n,p,count,len,n-1,n-1); cout<<endl;

}