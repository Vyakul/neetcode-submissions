class Solution {
public:
    bool isPalindrome(int x) {
        if(to_string(x).length()==1)
        return true;
        else{
        int count=0;
        int value=x;
        int s=0;
        while(x>0){
            s=(s+(x%10))*10;
            x/=10;
            count++;
        }
        if(s/10==value){
            return true;
        }
        }
        return false;
    }
};