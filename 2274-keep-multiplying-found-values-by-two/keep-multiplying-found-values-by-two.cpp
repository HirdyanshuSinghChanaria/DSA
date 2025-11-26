class Solution {
public:
    int findFinalValue(vector<int>& nums, int orignal) {
        sort(nums.begin(),nums.end());
        long long ori=orignal;
        while(1){
            auto it=lower_bound(nums.begin(),nums.end(),ori);
            if(it != nums.end() && *it == ori) ori=ori*2;
            else return (int)ori;
        }
        return 0;
    }
};