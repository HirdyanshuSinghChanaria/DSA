class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxi = 0;
        map<int, int> mp;

        // Count frequency of each number
        for (int num : nums) {
            mp[num]++;
        }

        // Iterate over map and check neighbors
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            // Check if next key (it->first + 1) exists
            if (mp.find(it->first + 1) != mp.end()) {
                int temp = it->second + mp[it->first + 1];
                maxi = max(maxi, temp);
            }
        }
        return maxi;
    }
};
