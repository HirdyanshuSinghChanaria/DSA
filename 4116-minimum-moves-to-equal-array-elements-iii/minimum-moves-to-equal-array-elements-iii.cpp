class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[n-1]) break;
            sum+=nums[n-1]-nums[i];
        }
        return sum;
    }
};