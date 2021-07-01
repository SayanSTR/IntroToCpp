/* 1. Define a struct for storing complex numbers. Define functions for arithmetic on
 * complex numbers.
 */

#include <iostream>
#include <math.h>
using namespace std;

struct cmplx {
    // Data Members
    float real; // real part
    float imgn; // imaginary part

    // Functions
    cmplx add(cmplx const &num) {
        cmplx res;
        res.real = real + num.real;
        res.imgn = imgn + num.imgn;
        return res;
    }

    cmplx sub(cmplx const &num) {
        cmplx res;
        res.real = real - num.real;
        res.imgn = imgn - num.imgn;
        return res;
    }

    cmplx mult(cmplx const &num) {
        cmplx res;
        res.real = real*num.real - imgn*num.imgn;
        res.imgn = real*num.imgn + imgn*num.real;
        return res;
    }

    cmplx div(cmplx const &num) {
        cmplx res;
        res.real = (real*num.real + imgn*num.imgn)/(pow(num.real,2)+pow(num.imgn,2));
        res.imgn = imgn + num.imgn;
        return res;
    }

};

int main(int argc, char const *argv[])
{
    return 0;
}
