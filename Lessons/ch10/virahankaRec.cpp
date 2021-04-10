#include <iostream>
using namespace std;

int Virahanka(int n){
    if(n == 1) return 1; // V_1
    if(n == 2) return 2; // V_2
    return Virahanka(n-1) + Virahanka(n-2); // V_{n-1} + V_{n-2}
}

int main()
{
    int n;
    char cmd;
    while(true) {
        cout<<"Enter number(n) to find Virahanka Number(V(n)): "; cin>>n;
        cout<<"V("<<n<<") = "<<Virahanka(n)<<endl;
        cout<<"'q'->quit || other charecter->repeat: "; cin>>cmd;
        if(cmd=='q') break;
    }
}
