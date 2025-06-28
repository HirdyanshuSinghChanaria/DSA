class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int first=1,second=1;
        int total=0;
        for(int i=2;i<=n;i++){
            total=first+second;
            first=second;
            second=total;
        }
        return total;
    }
};