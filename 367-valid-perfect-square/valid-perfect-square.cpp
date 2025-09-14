class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int l=1,r=num/2,mid;
        while(l<=r){
            mid=(l+r)/2;
            if((long long)mid*mid == (long long)num) return true;
            else if((long long)mid*mid >(long long)num) r=mid-1;
            else l=mid+1;
        }
        return false;
    }
};