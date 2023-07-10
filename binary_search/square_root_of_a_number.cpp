void bin_seatch(int n, int low, int high, int& result) {
    if (low > high) return;

    int mid = (low+high)/2;
    if (mid*mid == n) {
        result = mid;
        return;
    }
    else if (mid*mid < n) {
        result = mid;
        bin_seatch(n, mid+1, high, result);
    } else {
        bin_seatch(n, low, mid-1, result);
    }
}

int floorSqrt(int n) {
    int result;
    bin_seatch(n, 1, n, result);
    return result;
}
