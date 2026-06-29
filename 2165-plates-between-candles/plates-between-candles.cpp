class Solution {
public:
    int fnd(vector<int>&s,int l,int r){
        auto lft=lower_bound(s.begin(),s.end(),l);
        if(lft==s.end()) return 0;
        int itl=distance(s.begin(),lft);
        auto rgt=lower_bound(s.begin(),s.end(),r);
        if(rgt==s.end()) rgt=rgt-1;
        else if(rgt!=s.begin() && *rgt!=r) rgt=rgt-1;
        int itr=distance(s.begin(),rgt);
        // cout<<*rgt<<" "<<*lft<<endl;
        if(rgt==lft || rgt<lft) return 0;
        return *rgt-*lft-(itr-itl-1)-1;
    }
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int>ans(n);
        vector<int>temp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|') temp.push_back(i);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++){
            ans[i]=fnd(temp,queries[i][0],queries[i][1]);
        }
        return ans;
    }
};