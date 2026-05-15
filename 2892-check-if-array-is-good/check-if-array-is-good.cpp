class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>n-1) return false;
            mp[nums[i]]++;
        }
        if(mp.size()!=n-1 || mp[n-1]<2) return false;
        return true;
    }
};