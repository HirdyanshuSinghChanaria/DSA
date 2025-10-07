class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=g.size();
        priority_queue<int,vector<int>,greater<int>>gz,sz;
        for(auto it:g) gz.push(it);
        for(auto i:s) sz.push(i);
        while(!sz.empty() && !gz.empty()){
            if(sz.top()>=gz.top()){sz.pop();gz.pop();}
            else sz.pop();
        }
        return n-gz.size();
    }
};