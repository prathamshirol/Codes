class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long int rs=0;
        long long int ls=0;
        for(int i=0;i<nums.size();i++)
        {
            rs=rs+nums[i];
            
        }
        for(int i=0;i<nums.size();i++)
        {
            rs=rs-nums[i];
            if(rs==ls)
                return i;
            ls=ls+nums[i];
        }
        return -1;
    }
};