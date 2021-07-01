/* 3. Write a function which returns a circle having two given points as the endpoints of a
 * diameter. Assume the definition of the circle structure given in Section 15.1.
 */

#include <iostream>
#include <math.h>
using namespace std;

struct Point
{
    double x;
    double y;
};

struct Circle
{
    Point center;
    double radius;
};

double distance(const Point &a, const Point &b) {
    // returns distance between two points
    return sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
}

Point midpoint(const Point &a, const Point &b) {
    // returns Point at the middle of two given points
    Point mp;
    mp.x = (a.x+b.x)/2.0; mp.y = (a.y+b.y)/2.0;
    return mp;
}

Circle endpoints(const Point &a, const Point &b) {
    // returns Circle object with center as midpoint of two given points
    Circle c;
    c.center = midpoint(a,b);
    c.radius = distance(a,b)/2.0;
}

