/* 4. Define the operator >> for the class V3. This should enable you to write in >> v;
 * where v is of type V3. When this is executed, the user will type in 3 floating point
 * numbers which will get placed in v.
 */

#include <iostream>
#include <math.h>
using namespace std;

struct V3
{
    // data members
    double x, y, z;

    // constructors
    V3() {}

    V3(double a, double b, double c) {
        x=a; y=b; z=c;
    }

    //friend istream &operator>>(istream &stream, V3 &v);
    //friend ostream &operator<<(ostream &stream, V3 &v);
    
    double length()
    {
        // length
        return sqrt(x * x + y * y + z * z);
    }

    V3 operator+(V3 b)
    {   // vector addition
        return V3(x + b.x, y + b.y, z + b.z);
    }

    V3 operator*(double t)
    {   // scalar multiplication
        return V3(x*t, y*t, z*t);
    }

     V3 operator*(V3 b)
    {   // vector multiplication
        return V3((y*b.z)-(z*b.y), (z*b.x)-(x*b.z), (x*b.y)-(y*b.x));
    }

};

V3 operator*(V3 v, double factor){ // scalar multiplication
    return V3(v.x*factor, v.y*factor, v.z*factor);
}

istream &operator>>(istream &stream, V3 &v) {
    // input V3
    stream >> v.x >> v.y >> v.z;
    return stream;
}

ostream &operator<<(ostream &stream, V3 &v) {
    // input V3
    stream <<"x = "<<v.x<<", y = "<<v.y<<", z = "<<v.z<<endl;
    return stream;
}

int main()
{
    V3 p,q,r,s;
    cin>>p>>q;
    r = p+q;
    s = p*q;
    cout<<r<<s;

}
