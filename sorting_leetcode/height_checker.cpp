class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> aux(heights);
        sort(aux.begin(), aux.end());
        int n = aux.size(), result = 0;
        
        for (int i = 0; i < n; i++) {
            if (aux[i] != heights[i]) result++;
        }
        
        return result;
    }
};