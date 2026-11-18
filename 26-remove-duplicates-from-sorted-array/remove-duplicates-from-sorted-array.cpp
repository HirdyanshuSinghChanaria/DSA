class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),i=0,j=1;
        if(n==1) return n;
        while(i<n && j<n){
            if(nums[i]==nums[j]) j++;
            else if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;j++;
            }
        }
        return i+1;
    }
};