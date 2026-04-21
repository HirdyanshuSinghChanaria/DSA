class Solution {
public:
    int rev(int n){
        int r=0,rem;
        while(n!=0){
            rem=n%10;
            r=r*10+rem;
            n=n/10;
        }
        return r;
    }
    int mirrorDistance(int n) {
        return abs(n-rev(n));
    }
};