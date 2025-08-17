class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int b=nums.size()/2;
        for(int i=0; i<nums.size(); i++) {
         m[nums[i]]++;
        }
        for(auto itr=m.begin(); itr!=m.end(); itr++){
            if((*itr).second>b){

                return (*itr).first;
            }
        }
   return -1; }
};