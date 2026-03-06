class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid=l+(h-l)/2;
        int p1,p2;
        vector<int> v;    //5 7 7 8 8 10
        v.push_back(-1);
        v.push_back(-1);
        bool f1 =false;
        bool f2=false;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]==target){
                if(mid == 0 || nums[mid-1]!=target){
                    p1=mid;
                    f1=true;
                    break;
                } 
                else h=mid-1;
            }
            else if(nums[mid]<target) l=mid+1;
            else if(nums[mid]>target) h=mid-1;
            


        }
        l=0;
        h=nums.size()-1;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]==target){
                if(mid == nums.size()-1 || nums[mid+1]!=target){
                    p2=mid;
                    f2=true;
                    break;
                } 
                else l=mid+1;
            }
            else if(nums[mid]<target) l=mid+1;
            else if(nums[mid]>target) h=mid-1;
            


        }
        if(f1==true) v[0]=p1;
        if(f2==true) v[1]=p2;
        return v;
        
        
    }
        
};