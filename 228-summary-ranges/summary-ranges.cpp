class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        string str1="",str2="";
        vector<string>ret;
        if(nums.size()==0) return ret;
        str1=str1+to_string(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                str2=to_string(nums[i]);
            }
            else{
                if(str2==""){
                    ret.push_back(str1);
                    cout<<"i="<<nums[i]<<endl;
                }
                else{
                    ret.push_back(str1+"->"+str2);
                }
                str1=""+to_string(nums[i]);
                str2="";
            }
        }
        if (str2 == "") {
            ret.push_back(str1);
        } else {
            ret.push_back(str1 + "->" + str2);
        }
        return ret;
    }
};