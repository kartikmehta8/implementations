int Count(int n) {
    int count = 0;
    while (n > 0) {
        if ((n & 1) != 0) count++;    
        n = n >> 1;
    }
    return count;
}

int countSetBits(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        count += Count(i);
    }
    return count;
}