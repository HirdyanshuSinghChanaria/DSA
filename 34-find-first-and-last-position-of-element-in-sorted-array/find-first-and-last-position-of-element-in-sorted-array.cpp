class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        vector<int>ans={-1,-1};
        auto it=lower_bound(nums.begin(),nums.end(),target);
        if(it!=nums.end() && *it==target) ans[0]=distance(nums.begin(),it);
        auto i=upper_bound(nums.begin(),nums.end(),target);
        if(i!=nums.begin() && *(i-1)==target) ans[1]=distance(nums.begin(),i-1);
        return ans;
    }
};