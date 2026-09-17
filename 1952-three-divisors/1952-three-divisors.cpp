class Solution {
public:
    bool isThree(int n) {
        int count=2;
        for(int m=2;m<n;m++){
            if(n%m==0){
                count++;
            }
        }
        if(count==3){
            return true;
        }
        return false;
    }
};