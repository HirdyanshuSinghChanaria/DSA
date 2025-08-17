class Solution {
public:
    bool isPowerOfThree(int n) {
        int x=0;
    while(1){
        if(n==pow(3,x)){
            return true;
        }
        else if(n<pow(3,x)){
            return false;
        }
        x++;
    }
    return 0;
    }
};