#include <iostream>
using namespace std;

int main()
{
    int count[10] = {0};
    // for(int i = 0; i < 10; i++){
    //     count[i] = 0;
    // }
    for(int i=0; i<100; i++) {
        float marks;
        cin >> marks;
        int index = marks/10;
        if(index >=0 && index <= 9) count[index]++;
        else cout<<"Marks are out of range!\n";
    }
}
