class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.length()%2!=0) return false;
        unordered_map<char,int>mp;
        for(int i=0;i<moves.length();i++) mp[moves[i]]++;
        if(mp['U']==mp['D'] && mp['L']==mp['R']) return true;
        return false;
    }
};