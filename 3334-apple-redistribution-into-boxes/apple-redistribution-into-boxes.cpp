class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int appsum=accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end());
        int sum=0,n=capacity.size(),count=0;
        for(int i=n-1;i>=0;i--){
            if(sum>=appsum) return count;
            sum+=capacity[i];
            count++;
        }
        if(sum>=appsum) return count;
        return 0;
    }
};