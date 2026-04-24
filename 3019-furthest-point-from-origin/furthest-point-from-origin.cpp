class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.length();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[moves[i]]++;
        }
        return abs(mp['L']-mp['R'])+mp['_'];
    }
};