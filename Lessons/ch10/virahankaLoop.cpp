#include <iostream>
using namespace std;

int VirahankaLoop(int n) { // Program to ompute Virahanka number V_n
    int v1=1,v2=2;  // v1 = V_1, v2 = V_2
    if(n == 1) return v1;
    else if(n == 2) return v2;
    else {
        int secondlast=v1, last=v2, current;
        for(int i=0; i<(n-2); i++) {
            current = secondlast + last;
            secondlast = last;  // prepare for next iteration
            last = current;
        }
        return current;
    }
}


int main()
{
    int n;
    char cmd;
    while(true) {
        cout<<"Enter number(n) to find Virahanka Number(V(n)): "; cin>>n;
        cout<<"V("<<n<<") = "<<VirahankaLoop(n)<<endl;
        cout<<"'q'->quit || other charecter->repeat: "; cin>>cmd;
        if(cmd=='q') break;
    }
}
