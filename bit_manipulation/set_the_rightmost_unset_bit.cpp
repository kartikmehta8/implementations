int setBit(int num, int i) {
    return ((1 << i-1) | num);
}

bool oddEven(int N){
    if (N & 1 != 0) return 1;
    return 0;
}

int setBits(int N){
    if ((N & (N + 1)) == 0) return N;
    int position = 1, num = N;
    while (oddEven(N) == 1) {
        position++;
        N = N >> 1;
    }
    return setBit(num, position);
}