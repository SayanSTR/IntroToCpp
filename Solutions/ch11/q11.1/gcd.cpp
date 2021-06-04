int gcd(int m, int n){
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
