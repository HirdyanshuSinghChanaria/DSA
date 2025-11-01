class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = (int)arr.size();
        stack<int>st1, st2;
        vector<int>ans;
        for(int i = n-1; i>=0; i--)st1.push(arr[i]);
        vector<int>hash;
        while(!st1.empty()){
            int x = st1.top();
            st1.pop();
            if(hash.empty() or hash.back()< x){
                hash.push_back(x);
            }
            else hash.push_back(hash.back());
            while(!st1.empty() and st1.top() <= x){
                int xx = st1.top();
                st2.push(xx);
                st1.pop();
            }
            if(!st1.empty() and st1.top() > x){
                ans.push_back(st1.top());
                while(!st2.empty()){
                    st1.push(st2.top());
                    st2.pop();
                }
            }
            else{
                int check =0;
                while(!st2.empty()){
                    st1.push(st2.top());
                    st2.pop();
                }
                
                auto it = upper_bound(hash.begin(), hash.end(), x);
                if(it == hash.end()){
                    ans.push_back(-1);
                }
                else ans.push_back(*it);

            }

        }
        return ans;
    }
};