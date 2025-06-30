class Solution {
public:
    int findLHS(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        unordered_map<int, int> freq;
        for (int num : nums)
            ++freq[num];

        int res = 0;
        for (const auto& [num, count] : freq)
            if (freq.count(num + 1))
                res = max(res, count + freq[num + 1]);

        return res;
    }
};
