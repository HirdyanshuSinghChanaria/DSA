class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>>temp=mat;
        int n=mat[0].size(),nk=k%n;
        for(int i=0;i<mat.size();i++){
            if(i%2==0) rotate(mat[i].begin(),mat[i].begin()+nk,mat[i].end());
            else rotate(mat[i].begin(),mat[i].end()-nk,mat[i].end());
        }
        return temp==mat;
    }
};