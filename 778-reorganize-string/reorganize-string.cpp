class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++) mp[s[i]]++;
        priority_queue<pair<int,char>>fre;
        for(auto it: mp) fre.push({it.second,it.first});
        string ans="";
        while(fre.size()>1){
            auto [f1,c1]=fre.top();
            fre.pop();
            ans+=c1;
            f1--;
            auto [f2,c2]=fre.top();
            fre.pop();
            ans+=c2;
            f2--;
            if(f1>0) fre.push({f1,c1});
            if(f2>0) fre.push({f2,c2});
        }
        if(!fre.empty()){
            auto [f,c]=fre.top();
            if(f>1) return "";
            ans+=c;
        }
        return ans;
    }
};