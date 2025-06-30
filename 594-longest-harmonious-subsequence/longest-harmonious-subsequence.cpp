class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxi = 0;
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        for (auto it: mp) {
            if (mp.count(it.first + 1)) {
                int temp = it.second + mp[it.first + 1];
                maxi = max(maxi, temp);
            }
        }
        return maxi;
    }
};
