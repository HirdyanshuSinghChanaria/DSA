class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int ma=INT_MAX;
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
            if(m[nums[i]].size()>=3){
                int temp=0;
                int j=(m[nums[i]].size())-1;
                temp+=abs(m[nums[i]][j]-m[nums[i]][j-1]);
                temp+=abs(m[nums[i]][j-1]-m[nums[i]][j-2]);
                temp+=abs(m[nums[i]][j]-m[nums[i]][j-2]);
                ma=min(ma,temp);
            }
        }
        return ma==INT_MAX?-1:ma;
    }
};