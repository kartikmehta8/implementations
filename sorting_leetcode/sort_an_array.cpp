class Solution {
public:
    
    void merge(vector<int>& nums, int low, int mid, int high) {
        int arr1 = mid-low+1;
        int arr2 = high-mid;
        
        vector<int> leftArr(arr1), rightArr(arr2);
        
        for (int i = 0; i < arr1; i++){
            leftArr[i] = nums[low+i];
        }
        for (int i = 0; i < arr2; i++) {
            rightArr[i] = nums[mid+1+i];
        }
        
        int i = 0, j = 0, k = low;
        
        while (i < arr1 && j < arr2) {
            if (leftArr[i] <= rightArr[j]) {
                nums[k] = leftArr[i];
                i++;
            } else {
                nums[k] = rightArr[j];
                j++;
            }
            k++;
        }
        
        while (i < arr1) {
            nums[k] = leftArr[i];
            i++;
            k++;
        }
        
        while (j < arr2) {
            nums[k] = rightArr[j];
            j++;
            k++;
        }
    }
    
    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return;
        
        int mid = (low+high)/2;
        
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};