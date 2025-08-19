class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long size=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                size++;
            }
            else{
                count+=(size*(size+1))/2;
                size=0;
            }
        }
        count+=(size*(size+1))/2;
        return count;
    }
};