class Solution {
public:
    int titleToNumber(string ct) {
        int ans=ct[0]-64;
        int n=ct.length();
        for(int i=1;i<n;i++){
            ans=(26*ans)+(ct[i]-64);
        }
        return ans;
    }
};