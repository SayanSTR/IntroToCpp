#include <simplecpp>

void hilbertCurve(int order, int step=100, int rotation=1, int quadrant=3) {
    // top-right: 1,  top-left: 2,  bottom-left: 3,  bottom-right: 4.
    switch (quadrant) {
        case 1: break;
        case 2: right(rotation*90); wait(1); break;
        case 3: left(rotation*90); wait(1); break;
        case 4: right(rotation*0); wait(1); break;
        default:
            break;
    }

    // base case
    if(order==1) {  // for order 1:
        /*left(rotation*90); wait(0.5);*/ forward(step); wait(0.5);
        right(rotation*90); wait(0.5); forward(step); wait(0.5);
        right(rotation*90); wait(0.5); forward(step); wait(0.5);
        /*left(rotation*90);*/ wait(1);
        return;
    }

    hilbertCurve(order-1, step, rotation*(-1), 3); forward(step);
    wait(0.5);
    //right(90); wait(0.1); forward(step); wait(0.1); left(90); wait(0.1);
    hilbertCurve(order-1, step, rotation*(1), 2);  forward(step);
    wait(0.5);
    //left(90); wait(0.1); forward(step); wait(0.1); left(180); wait(0.1);
    hilbertCurve(order-1, step, rotation*(1), 1);  right(rotation*90); wait(0.5); forward(step);
    wait(0.5);
    //forward(step); wait(0.1); right(180); wait(0.1);
    hilbertCurve(order-1, step, rotation*(-1), 4); left(rotation*90);
    wait(0.5);
}

int main()
{
    int n, step; cin>>n>>step;
    turtleSim();
    hilbertCurve(n,step); wait(3);
}