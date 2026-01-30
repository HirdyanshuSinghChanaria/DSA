class Solution {
public:
    int countt(int a){
        int count=0;
        while(a){
            if(a%2==1) count++;
            a=a/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
            v.push_back(countt(i));
        }
        return v;
    }
};