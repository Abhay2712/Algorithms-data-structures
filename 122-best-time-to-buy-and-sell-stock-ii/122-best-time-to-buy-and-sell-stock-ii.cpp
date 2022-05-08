class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int min=arr[0];
        int prof=0;
        int max=0;
        for(int i=1;i<n;i++){
            if(arr[i]<min){
                min=arr[i];  
            }
            else{
                prof+=arr[i]-min;
                min=arr[i];
            }
        }
        return prof;
    }
};