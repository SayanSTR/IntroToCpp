/* 2. Modify the function polygon so that it returns the perimeter of the polygon drawn 
 * (in addition to drawing the polygon).
 */

#include <simplecpp>

double polygon(int nsides, double sidelength)   // changed return type to double from void
// draws polygon with specified sides and specified sidelength.
// PRE-CONDITION: The pen must be down, and the turtle must be
// positioned at a vertex of the polygon, pointing in the clockwise
// direction along an edge.
// POST-CONDITION: At the end the turtle is in the same position and
// orientation as at the start. The pen is down.
{
    for(int i=0; i<nsides; i++) {
        forward(sidelength);
        right(360.0/nsides);
    }
    return nsides*sidelength;   // added code to return perimeter
}

int main() {
    turtleSim();
    cout<<polygon(6,60)<<endl;
    wait(3);
}