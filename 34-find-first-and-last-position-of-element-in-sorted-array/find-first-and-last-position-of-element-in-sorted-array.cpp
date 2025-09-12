class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        if(nums.size()==0) return ans;
        auto it=lower_bound(nums.begin(),nums.end(),target);
        if(it!=nums.end() && *it==target) ans[0]=distance(nums.begin(),it);
        auto i=upper_bound(nums.begin(),nums.end(),target);
        // cout<<distance(nums.begin(),i-1)<<endl;
        if(i!=nums.begin() && *(i-1)==target) ans[1]=distance(nums.begin(),i-1);
        return ans;
    }
};