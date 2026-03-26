class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            int rem=target-nums[i];
            if(m.find(rem)!=m.end())
            {
                return {m[rem],i};
            }
            m[nums[i]]=i;
        }
        return {};

        
    }
};