class Solution {
public:
    bool isPalindrome(int x) {
        int n,temp;
        long long rev =0;

        temp = x;

        if(x < 0){
            return false;
        }
        while(x !=0){
            n = x % 10;
            rev = rev * 10+n;
            x = x/10;
        }

        if(temp == rev){
            return true;
        }else{
            return false;
        }
    }
};