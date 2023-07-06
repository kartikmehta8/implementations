int missingNumber(vector<int>&a, int N) {
    int actualSum = N*(N+1)/2;
    for (auto it: a) actualSum -= it;
    return actualSum;
}
