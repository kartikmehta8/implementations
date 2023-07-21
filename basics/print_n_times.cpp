void loop(vector<string>& result, int n) {
    if (n <= 0) return;
    result.push_back("Coding Ninjas");
    loop(result, n-1);
}

vector<string> printNTimes(int n) {
    vector<string> result;
    loop(result, n);
    return result;
}