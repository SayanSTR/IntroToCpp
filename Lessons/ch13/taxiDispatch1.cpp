#include <iostream>
using namespace std;
int main()
{
    const int n = 100;
    int driverID[n], nWaiting=0;
    while(true)
    {
        char command; cin>>command;
        if(command=='d')
        {
            if(nWaiting>=n) cout<<"Queue full!\n";
            else {
                cin>>driverID[nWaiting];
                nWaiting++;
            }
        }
        else if(command=='c')
        {
            if(nWaiting==0) cout<<"No taxi available. Please try later.\n";
            else {
                cout<<"Assigning "<<driverID[0]<<endl;
                for(int i=1; i<n; i++)
                    driverID[i-1] = driverID[i];
                nWaiting--;
            }
        }
        else if(command=='x') break;
        else cout<<"Invalid command!\n";
    }
}