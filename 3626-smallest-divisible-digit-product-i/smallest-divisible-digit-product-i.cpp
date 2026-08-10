class Solution {
public:
    int prod(int &n){
        int pro=1;
        while(n!=0){
            int rem=n%10;
            pro*=rem;
            n=n/10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int temp;
        while(n%10!=0){
            temp=n;
            int pro=prod(temp);
            if(pro%t==0) return n;
            n++;
        }
        return n;
    }
};