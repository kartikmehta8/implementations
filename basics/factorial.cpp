vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    long long f = 1, i = 1;
    while (f <= n) {
        result.push_back(f);
        f = f*(i+1);
        i++;
    }
    return result;
}