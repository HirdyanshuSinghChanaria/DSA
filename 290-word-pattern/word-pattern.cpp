class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        string word;
        unordered_map<char, string> pt;
        unordered_map<string, char> st;
        int i = 0;

        while (iss >> word) {
            if (i >= pattern.length()) return false;

            char p = pattern[i];

            if (pt.count(p)) {
                if (pt[p] != word) return false;
            } else {
                pt[p] = word;
            }

            if (st.count(word)) {
                if (st[word] != p) return false;
            } else {
                st[word] = p;
            }

            i++;
        }

        return i == pattern.length(); // make sure no leftover pattern
    }
};
