void loop(vector<int>& result, int x) {
    if (x == 0) return;
    result.push_back(x);
    loop(result, x-1);
}

vector<int> printNos(int x) {
    vector<int> result;
    loop(result, x);
    return result;
}