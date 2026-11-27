class Solution {
public:
    vector<int> getRow(int numRows) {
        if(numRows==0) return {1};
        if(numRows==1) return {1,1};
        vector<vector<int>>ans={{1},{1,1}};
         numRows-=1;
        while(numRows>0){
            vector<int>temp;
            temp.push_back(1);
            // cout<<ans.size()<<endl;
            int n=ans[ans.size()-1].size();
            for(int i=0;i<n-1;i++){
                int v=ans[n-1][i]+ans[n-1][i+1];
                // cout<<"ans"<<endl;
                temp.push_back(v);
            }
            temp.push_back(1);
            ans.push_back(temp);
            numRows--;
        }
        return ans.back();
    }
};