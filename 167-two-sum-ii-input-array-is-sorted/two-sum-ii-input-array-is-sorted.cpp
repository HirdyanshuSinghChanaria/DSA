class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
       unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int f=target-num;
            if(mp.find(f)!=mp.end()){
                return {mp[f]+1,i+1};
            }
            mp[num]=i;
        }
        return {-1,-1};
    }
};