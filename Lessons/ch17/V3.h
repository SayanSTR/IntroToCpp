#ifndef V3_H_
#define V3_H_

#include <iostream>
using namespace std;
class V3{
private:
    double x, y, z;
public:
    V3(double p=0, double q=0, double r=0);
    V3 operator+(V3 const &w) const;
    V3 operator*(double t) const;
    double length() const;
    friend ostream & operator<<(ostream & ost, V3 v);
};

ostream & operator<<(ostream & ost, V3 v);
#endif