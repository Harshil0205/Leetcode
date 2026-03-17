class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // while(digits > 0){
        //     plusOne.push_back(digits % 10);
        //     digits = digits / 10;
        // }
        // digits.reverse(  digits.begin(),  digits.end())

        int carry = 1;
        for(int i =digits.size()-1;i >=0; i--){
            int sum = digits[i]+carry;
            digits[i] = sum % 10;
            carry = sum /10;

            if (carry == 0) break;
        }
        if (carry){
             digits.insert( digits.begin(),carry);
        }
        return digits;
    }
};