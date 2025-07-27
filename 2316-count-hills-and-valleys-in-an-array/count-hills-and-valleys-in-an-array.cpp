class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int prev=nums[0],forw,hill=0,valley=0;
        for(int i=1;i<nums.size()-1;i++){
            forw=nums[i+1];
            if(prev<nums[i] && forw<nums[i]){
                hill++;
                prev=nums[i];
            }
            else if(prev>nums[i] && forw>nums[i]){
                valley++;
                prev=nums[i];
            }
        }
        return (hill+valley);
    }
};