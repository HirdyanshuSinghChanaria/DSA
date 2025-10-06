class Solution {
public:
    int longestPalindrome(string s) {
        int temp=0,n=s.length(),sum=0;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){auto it=mp.begin();return it->second;}
        while(!mp.empty()){
            auto it=mp.begin();
            if(it->second%2==0){
                sum+=it->second;
                mp.erase(it->first);
            }
            else if(it->second==1){
                if(temp==0) sum++;
                else mp.erase(it->first);
                temp=1;
            }
            else{
                sum+=(it->second)-1;
                mp[it->first]=1;
            }
        }
        return sum;
    }
};