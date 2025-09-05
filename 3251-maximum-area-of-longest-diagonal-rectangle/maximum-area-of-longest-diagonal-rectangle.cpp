class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& n) {
        int a,b,pro;
        double mdia=-1;
        for(int i=0;i<n.size();i++){
            if( mdia < ((n[i][0]*n[i][0]) + (n[i][1]*n[i][1])) ){
               mdia=(n[i][0]*n[i][0]) + (n[i][1]*n[i][1]);
               a=n[i][0];
               b=n[i][1];
               pro=a*b;
            }
            else if(mdia == ((n[i][0]*n[i][0]) + (n[i][1]*n[i][1]))){
                pro=max(pro,(n[i][0]*n[i][1]));
            }
        }
        return pro;
    }
};