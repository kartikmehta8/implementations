class Solution {

public:
    
    static bool comp(Job x, Job y) {
        return (x.profit > y.profit);
    }
    
    vector<int> JobScheduling(Job arr[], int n) { 
        sort(arr, arr+n, comp);
        
        int maxi = arr[0].dead;
        for (int i = 1; i < n; i++) {
            maxi = max(arr[i].dead, maxi);
        }
        
        int slot[maxi+1];
        
        for (int i = 0; i <= maxi; i++) slot[i] = -1;
        
        int countJobs = 0, jobProfit = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = arr[i].dead; j > 0; j--) {
                if (slot[j] == -1) {
                    slot[j] = i;
                    countJobs++;
                    jobProfit += arr[i].profit;
                    break;
                }
            }
        }
        return {countJobs, jobProfit};
    } 
};
