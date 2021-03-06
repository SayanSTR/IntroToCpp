#include <iostream>
using namespace std;


int main()
{
/***********Variable Declarations************/

double count = 1, totalValue = 0, it, x, z, powe = 1, y;

cout << "Iterations=";
cin >> it;
cout << "x=";
cin >> x;
z = (x + 1) / (x - 1); //We start from power -1, to make sure we get the right power in each iteration;
//Store step to not have to calculate it each time
double step = ((x - 1) * (x - 1)) / ((x + 1) * (x + 1));
/***************End User Input***************/



while (count <= it)
{

    z *= step;
    y = (1 / powe)*z;

    totalValue = totalValue + y;
    powe = powe + 2;
    count++;
    //We no longer need to set z to 1, as the previous value becomes useful
}

cout << "The Result is:" << 2*totalValue << endl;

}