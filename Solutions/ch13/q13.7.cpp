/* 7. Write a program whi h takes as input two vectors (as defined in mathematics/physics)
 * - represent them using arrays - and prints their dot product. Make this into a function.
 */

#include <iostream>
using namespace std;

void printVector(float v[3]) {
    cout<<v[0]<<"i + "<<v[1]<<"j + "<<v[2]<<"k\n";
}

float *dotProduct(float a[3], float b[3])
{
    static float result[3];
    for(int i=0; i<3; i++) {
        result[i] = a[i]*b[i];
    }
    printVector(result);    // required answer. may declare function type as void.
    return result;  // for revision of pointers. not necesssary.
}

int main()
{
    float a[3], b[3]; float* c;
    for(int i=0; i<2; i++) {
        for (int j = 0; j<3; j++)
        {
            if(i==0) cin>>a[j];
            else cin>>b[j];
        }
        if(i==0) printVector(a);
        else printVector(b);
    }
    c = dotProduct(a,b);
    printVector(c);
}
