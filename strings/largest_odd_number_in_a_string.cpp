class Solution {
public:
    string largestOddNumber(string num) {
        int oddIndex = -1, n = num.size();
        for (oddIndex = n-1; oddIndex >= 0; oddIndex--){
            if (int(num[oddIndex])%2!=0) break;
        }
        if (oddIndex == -1) return "";
        string result = "";
        for (int i = 0; i <= oddIndex; i++) result += num[i];
        return result;
    }
};