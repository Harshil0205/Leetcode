class Solution {
public:
    string addBinary(string s1, string s2) {
         int n = s1.size();
        int m = s2.size();
        string result = "";
        int carry = 0;
        int i=n-1;
        int j=m-1;

        while(i>=0 || j>=0 || carry) {
            if(i>=0 && j>=0) {
                if((s1[i] == '0' && s2[j] == '1') || (s1[i] == '1' && s2[j] == '0')) {
                    if(carry) {
                        result += '0';
                    }else{
                        result += '1';
                    }
                }else if(s1[i] == '1' && s2[j] == '1') {
                    if(carry) {
                        result += '1';
                    }else{
                        result += '0';
                        carry = 1;
                    }
                }else{
                    if(carry) {
                        result += '1';
                        carry = 0;
                    } else{
                        result += '0';
                    }
                }
            }else {
                if(i>=0) {
                   if(s1[i] == '1') {
                      if(carry) {
                          result += '0';
                      }else{
                          result += '1';
                      } 
                   }else{
                       if(carry){
                           result += '1';
                           carry = 0;
                       }else{
                           result += '0';
                       }
                   } 
                }else if(j>=0) {
                    if(s2[j] == '1') {
                      if(carry) {
                          result += '0';
                      }else{
                          result += '1';
                      } 
                   }else{
                       if(carry){
                           result += '1';
                           carry = 0;
                       }else{
                           result += '0';
                       }
                   } 
                }else{
                    if(carry) {
                        result += '1';
                        carry = 0;
                    }
                }
            }
            
            i--;
            j--;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};