class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it=upper_bound(nums.begin(),nums.end(),target);
        if(it==nums.begin() || *(it-1)!=target) return -1;
        return distance(nums.begin(),it-1);
    }
};