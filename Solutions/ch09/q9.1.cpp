/* 1. Write a fun tion that prints the GCD of two numbers.
 */

int gcd(int x, int y)
{
    while(x%y != 0) {
        int rem = x%y;
        x = y; y = rem;
    }
    return y;
}