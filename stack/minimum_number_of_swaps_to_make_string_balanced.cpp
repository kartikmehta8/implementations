class Solution {
public:
    int minSwaps(string s) {
        int stack = 0;
        for (auto it: s) {
          if (it == '[') stack++;
          else if (stack > 0) stack--;
        }
        return (stack+1)/2;
    }
};