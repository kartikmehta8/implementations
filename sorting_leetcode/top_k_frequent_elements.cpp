class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> result;
        for (auto it: nums) mp[it]++;
        vector<pair<int, int>> aux;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            pair<int, int> p = {it->second, it->first};
            aux.push_back(p);
        }
        sort(aux.begin(), aux.end(), greater <>());
        for (auto it = aux.begin(); it != aux.end(); it++) {
            if (k == 0) break;
            result.push_back((*it).second);
            k--;
        }
        return result;
    }
};