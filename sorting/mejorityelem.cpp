class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=1;
        int x;
        int n=nums.size()/2;
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int j=1;j<nums.size();j++){
            if(nums[j]==nums[j-1]) i++;
            if(i>n){
                x= nums[j];
                break;
            }
            if(nums[j]!=nums[j-1]) i=1;
        }
        return x;
        // sort(nums.begin(),nums.end());
        // return nums[(nums.size()/2)];
        
    }
};