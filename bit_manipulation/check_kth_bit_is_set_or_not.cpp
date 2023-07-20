bool isKthBitSet(int num, int i) {
        while (i > 1) {
        num = num >> 1;
        i--;
    }
    return num%2;
}