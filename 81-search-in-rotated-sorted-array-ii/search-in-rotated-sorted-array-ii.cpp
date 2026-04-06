class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        auto it=lower_bound(nums.begin(),nums.end(),target);
        if(it!=nums.end() && *it==target) return true;
        return false;
    }
};