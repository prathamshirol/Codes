class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                c++;
            }
        }
        if(c>1&& c!=0) return true;
        return false;
    }
};