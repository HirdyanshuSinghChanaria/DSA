class Solution {
public:
    int bestClosingTime(string customers) {
        int size=customers.size(),n=0,y=0,maxp=0;
        for(int i=0;i<size;i++){
            if(customers[i]=='Y') maxp++;
        }
        int temp=0,mp=maxp,idx=0;
        for(int i=0;i<size;i++){
            if(customers[i]=='Y') y++;
            else n++;
            temp=maxp-y+n;
            if(temp<mp){
                mp=temp;
                idx=i+1;
            }
        }
        return idx;
    }
};