class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int j=arr.size() -1;
        int m=i+(j-i)/2;
        while(i<=j){
            m=i+(j-i)/2;
            if(arr[m]>arr[m+1]&& arr[m]>arr[m-1]){
                return m;
                break;

            } 
            if(arr[m]>arr[m-1]) i=m;
            if(arr[m]>arr[m+1]) j=m;
            
        }
        return 0;
        
    }
};