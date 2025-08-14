class Solution {
public:
    bool check(string word,vector<int>hs){
        for(int i=0;i<word.length();i++){
            if(hs[word[i]-'a']!=0) hs[word[i]-'a']--;
        }
        for(auto it:hs) if(it>0) return false;
        return true;
    }
    string shortestCompletingWord(string lp, vector<string>& words) {
        vector<int>hs(26);
        for(int i=0;i<lp.length();i++){
            if(lp[i]>='a' && lp[i]<='z') hs[lp[i]-'a']++;
            else if(lp[i]>='A' && lp[i]<='Z') hs[tolower(lp[i])-'a']++;
        }
        stable_sort(words.begin(), words.end(),[](const string &a, const string &b) {
        return a.size() < b.size();});
        for(int i=0;i<words.size();i++){
            if(check(words[i],hs)) return words[i];
        }
        return "";
    }
};