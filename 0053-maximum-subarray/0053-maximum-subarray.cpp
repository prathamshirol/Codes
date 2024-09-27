class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int cursum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            cursum=cursum+nums[i];
            if(cursum>maxsum)
            {
                maxsum=cursum;
            }
            if(cursum<0)
            {
                cursum=0;
                
            }
        }
        return maxsum;
        
    }
};