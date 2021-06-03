/* 17. Suppose you want to send a message using the following very simple code. Say your
message only consists of the letters 'a' through 'z', and in the code your merely replace
the ith letter by i. Thus 'a' will be coded as 1, 'b' as 2, and so on till 'z' by 26. Further,
there are no separators between the numbers orresponding to each letter. Thus, the
word "bat" will be coded as the string 2120. Clearly, some strings will have more than
one interpretation, i.e. the string 2120 could also have come from "ut". Suppose you
are given a string of numbers, say 1 digit per line (so 2120 will be given on 4 lines).
You are to write a program that takes such a sequence of numbers and prints out the
number of ways in which it an be interpreted. You are free to demand that the input
be given from the last digit if you wish.
 */

// Algorithm:
/*
1. Take first digit
2. Print it as single letter
3. 

*/

#include <iostream>
using namespace std;

void decode(int level, int input, int numOfInputs=1) { 
    //
    if(level==0 || numOfInputs==2) {
        cout<<"\n";
        return;
    }

    int number=0;
    cin>>number;
    if(number!=0) {
        char c = number + 64;
        cout<<c;
        decode(level-1,  )
    }
}

// unsolved!