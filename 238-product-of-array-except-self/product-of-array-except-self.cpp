class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        long long pro=1,pro0=1;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) count++;
            else pro0*=nums[i];
            pro*=nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0) nums[i]=pro/nums[i];
            else if(nums[i]==0 && count==1){
               nums[i]=pro0;
            }
            else if(nums[i]==0){
                nums[i]=0;
            }
        }
        return nums;
    }
};