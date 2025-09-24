class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int sum=0,m=0;
        for(auto i:nums) mp[i]++;
        for(auto it:mp) m=max(m,it.second);
        for(auto it:mp) if(it.second==m) sum=sum+m;
        return sum;
    }
};