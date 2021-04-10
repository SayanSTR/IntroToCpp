#include <iostream>
#include <iterator>
#include <map>
#include <string>
using namespace std;

int dist(string a, string b, map<string, string> father){
    int d = 0;
    string curr = a;
    while (true)
    {
        if (curr == b)
        {
            return d; //Blank-1
        }
        else if (father.count(curr) == 0)//Blank-2)
        {
            return -1;
        }
        curr = father[curr];//Blank-3
        d = d + 1;//Blank-4
    }
}

int main()
{
    map<string, string> father;
    father["A"]="B";
    father["B"]="C";
    father["D"]="C";

    cout<<dist("A","C",father)<<endl;
    cout<<dist("A","D",father)<<endl;
}
