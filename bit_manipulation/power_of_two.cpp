bool oddEven(int N){
    if (N & 1 != 0) return 1;
    return 0;
}

bool isPowerOfTwo(int n) {
    if (n < 0) return false;
    int count = 0;
    while (n != 1) {
        if (oddEven(n)) count++;
        n = n >> 1;
    }
    if (count > 0) return false;
    return true;
}