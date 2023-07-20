void sol(vector<int>& result, int start, int end) {
    if (start > end) return;
    result.push_back(start);
    sol(result, start+1, end);
}

vector<int> printNos(int x) {
    vector<int> result;
    sol(result, 1, x);
    return result;
}