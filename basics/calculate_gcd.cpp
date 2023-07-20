int calcGCD(int n, int m){
    if (m == 0) return n;
    return calcGCD(m, n%m);
}