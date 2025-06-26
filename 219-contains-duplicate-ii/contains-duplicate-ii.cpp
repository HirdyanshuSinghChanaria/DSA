class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>a;
        for(int i=0;i<n;i++){
            if(a.count(nums[i])) return true;
            else a.insert(nums[i]);
            if(a.size()>k){
                a.erase(nums[i-k]);
            }
        }
        return false;
    }
};