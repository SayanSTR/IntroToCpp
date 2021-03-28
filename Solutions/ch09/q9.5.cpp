/* 5. Write the fun tion read marks into and the main program for mark averaging using
 * pointers.
 */

#include <iostream>
using namespace std;

bool read_marks_into(float* var) {
    cin >> *var;
    return *var != 200;
}

int main() {
    float nextmark=0, sum=0;
    int count=0;
    while(read_marks_into(&nextmark)) {
        sum = sum + nextmark;
        count = count + 1;
    }
    cout << "The average is: " << sum/count << endl;
}
