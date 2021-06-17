/*int gcd(int, int);  // declaration of function gcd*/

int gcd(int m, int n){  // definition of gcd
    int mdash,ndash;
    while(m % n != 0)
    {
        mdash = n;
        ndash = m % n;
        m = mdash;
        n = ndash;
    }
    return n;
}

int lcm(int m, int n){
    return m*n/gcd(m,n);
}
// check