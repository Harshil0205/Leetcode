class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            while(i<nums.size() && nums[i]!=val) i++;
            while(j<nums.size() && nums[j]==val) j--;
            if(i>j) break;
            swap(nums[i],nums[j]);
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==val) return i;
        }
        return nums.size();
    }
};