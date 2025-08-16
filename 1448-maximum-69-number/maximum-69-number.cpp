class Solution {
public:
    int reverse(int num, bool first6) {
        int number = 0;

        while(num) {
            int dig = num % 10;

            if(dig == 6 && first6)
                dig = 9, first6 = false;
            
            number = number * 10 + dig;
            num /= 10;
        }

        return number;
    }
    
    int maximum69Number (int num) {
        return reverse(reverse(num, false), true);
    }
};