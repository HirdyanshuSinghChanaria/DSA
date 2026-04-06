class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),i=0,j=n-1,ans=INT_MAX;
        while(i<=j){
            if(nums[i]>nums[j]){
                ans=min(ans,nums[j]);
                i++;j--;
            }
            else if(nums[i]==nums[j]){
                ans=min(ans,nums[i]);
                return ans;
            }
            else{
                break;
            }
        }
        return min(ans,nums[i]);
    }
};