class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size(),l=0,r=0,ans=0;
        unordered_map<int,int>mp;
        while(r<n){
            mp[fruits[r]]++;
            while(mp.size()>2) {
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
            //0-1 4-1      
            if(mp.size()==2){
                auto it1 = mp.begin();
                auto it2=next(it1);
                int t1=it1->second;
                int t2=it2->second;
                ans=max(ans,t1+t2);
            }
            if(mp.size()==1){
                auto it=mp.begin();
                int t=it->second;
                ans=max(ans,t);
            }
            r++;
        }
        return ans;
    }
};