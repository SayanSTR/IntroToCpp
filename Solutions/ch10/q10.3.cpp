/* 3. Consider an equation ax + by = c, where a,b,c are integers, and the unknowns x,y are
 * required to be integers. Such equations are called Diaphontine equations. If GCD(a,b)
 * does not divide c, then the equation does not have any solution. However, the equation
 * will have infinitely many solutions if GCD(a,b) does divide c. Write a program which
 * takes a,b,c as input and prints a solution if GCD (a,b) divides c.
 * Hint 1: Suppose a = 1. Show that in this case an integer solution is easily obtained.
 * Hint 2: Suppose the equation is 17x + 10y = 4. Suppose you substitute y = z - x.
 * Then you get the new equation 7x + 10z = 4. Observe that the new equation has
 * smaller coefficients, and given a solution to the new equation you an get a solution to
 * the old one.
 */

#include <iostream>
using namespace std;

int gcd_extended(int a, int b, int &x, int &y) {
    if(b==0) {
        x=1; y=0;
        return a;
    }
    else {
        int x1=0, y1=0;
        int g = gcd_extended(b, a%b, x1, y1);
        x=y1; y=x1-(a/b)*y1;
        return g;
    }
}
void diaphontine(int a, int b, int c) {
    // ax + by = c is diaphontine equation. Prints x and y.
    int x=0, y=0; // solutions
    if(a==0 && b==0) {
        if(c==0) cout<<"Infinite solutions exist\n";
        else cout<<"No solution exists.\n";
    }
    else {
        int gcd = gcd_extended(a, b, x, y);
        if(c%gcd !=0) cout<<"No solution exists.\n";
        else {
            cout<<"x = "<< x*(c/gcd) <<", y = "<< y*(c/gcd) << endl;
        }
    }
}

int main()
{
    int a,b,c;
    // check gcd
    // for(int i=0; i<4; i++) { //
    //     cin>>a>>b;
    //     cout<<extended_gcd(a,b,x,y)<<endl;
    // }
    cin>> a>> b>> c;
    diaphontine(a, b, c);
}
