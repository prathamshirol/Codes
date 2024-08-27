class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int> res;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(const auto pair:m)
        {
            if(pair.second>nums.size()/3)
                res.push_back(pair.first);
        }
        
        return res;
    }
};