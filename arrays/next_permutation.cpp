vector<int> nextGreaterPermutation(vector<int> &A) {
    next_permutation(A.begin(), A.end());
    return A;
}
