class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int dis;
        auto it=lower_bound(nums.begin(),nums.end(),target);
        if((*it==target)) dis=distance(nums.begin(),it);
        else dis=distance(nums.begin(),it);
        return dis;
    }
};