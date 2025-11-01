class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = (int)arr.size();
        stack<int>st1, st2;
        vector<int>ans;
        for(int i = n-1; i>=0; i--)st1.push(arr[i]);
        deque<int>hash;
        while(!st1.empty()){
            int x = st1.top();
            cout<<(int)st1.size()<<endl;
            st1.pop();
            hash.push_back(x);
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
                for(auto it: hash){
                    if(it > x){
                        ans.push_back(it);
                        check = 1;
                        break;
                    }
                }
                if(!check)ans.push_back(-1);

            }

        }
        return ans;
    }
};