class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(const auto & pair:m)
        {
            if(pair.second>nums.size()/2)
                return pair.first;
        }
        return -1;
    }
};