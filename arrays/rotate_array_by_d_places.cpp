class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        d = d%n;
        int num[d];
        for (int i = 0; i < d; i++) num[i] = arr[i];
        
        for (int i = d; i < n; i++) {
            arr[i-d] = arr[i];
        }
        
        int j = 0;
        for (int i = n-d; i < n; i++) {
            arr[i] = num[j];
            j++;
        }
    }
};
