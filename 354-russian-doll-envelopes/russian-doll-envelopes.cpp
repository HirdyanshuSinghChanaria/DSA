class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        // Step 1: sort by width asc, height desc
        sort(envelopes.begin(), envelopes.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] == b[0]) return a[1] > b[1]; 
            return a[0] < b[0];
        });

        // Step 2: LIS on heights
        vector<int> lis;
        for (auto &env : envelopes) {
            int h = env[1];
            auto it = lower_bound(lis.begin(), lis.end(), h);
            if (it == lis.end()) {
                lis.push_back(h);
            } else {
                *it = h;
            }
        }

        return lis.size();
    }
};
