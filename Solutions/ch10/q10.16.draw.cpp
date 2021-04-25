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

int binomial_coeff(int n, int r) {
    if(n<0 || r<0) {
        cout<<"Invalid parameter(less than zero)\n";
        return 0;
    }
    // base case
    if(r==0 || r==n) {
        return 1;
    }
    // recursion
    return binomial_coeff(n-1,r) + binomial_coeff(n-1,r-1);
}


void draw(Turtle &t, int n, int path, int len) {
    //
    if(n==0) return;
    if(path%2==0) {
        wait(0.5); t.forward(len); wait(0.5);
    }
    else {
        t.left(90); wait(0.5);
        t.forward(len); wait(0.5);
        t.right(90); wait(0.5);
    }
    draw(t, n-1, path/2, len);
}

int main()
{
    //
    int nPoints, num, len, n; cin>>nPoints>>num>>len;
    int totalPaths = binomial_coeff(2*nPoints-2, nPoints-1); cout<<totalPaths<<endl;
    n = 2*nPoints-2;
    initCanvas("Path to pont", len*(nPoints+3), len*(nPoints+3));
    Turtle t;
    t.penUp(); t.moveTo(2*len,canvas_height()-2*len); t.penDown();
    Rectangle r(canvas_width()/2, canvas_height()/2, (nPoints-1)*len, (nPoints-1)*len);
    while(n>0) {
        t.penUp(); t.moveTo(2*len,canvas_height()-2*len); t.penDown();
        draw(t, n, num, len);
        num--;
    }
    wait(3);
}