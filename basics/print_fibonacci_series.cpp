vector<int> generateFibonacciNumbers(int n) {
    int a = 0, b = 1;
    if (n == 1) return vector<int>{0};
    if (n == 2) return vector<int>{0, 1};
    vector<int> result = {0, 1};
    for (int i = 0; i < n-2; i++) {
        int c = a+b;
        result.push_back(c);
        a = b;
        b = c;
    }
    return result;
}