int gcd(int, int);  // declaration of function gcd

int lcm(int m, int n){
    return m*n/gcd(m,n);
}
