class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=nums.size(),a=0,b=1;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0) {ans[a]=nums[i];a+=2;}
            else{ans[b]=nums[i];b+=2;}
        }
        return ans;
    }
};