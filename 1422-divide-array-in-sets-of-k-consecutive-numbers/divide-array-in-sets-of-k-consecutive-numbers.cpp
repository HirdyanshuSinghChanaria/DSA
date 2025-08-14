class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size() % k) return false;

        map<int, int> freq;
        for (int num : nums) freq[num]++;

        while (!freq.empty()) {
            int start = freq.begin()->first;
            for (int i = 0; i < k; i++) {
                int target = start + i;
                if (freq[target] == 0) return false;
                freq[target]--;
                if (freq[target] == 0) freq.erase(target);
            }
        }
        return true;
    }
};
