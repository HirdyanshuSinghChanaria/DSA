class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                int cw  = (i - startIndex + n) % n;  // clockwise
                int ccw = (startIndex - i + n) % n;  // counter-clockwise
                ans = min(ans, min(cw, ccw));
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};