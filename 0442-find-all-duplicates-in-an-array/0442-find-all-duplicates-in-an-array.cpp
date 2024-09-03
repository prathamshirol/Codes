class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> r;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(const auto &pair:m)
        {
            if(pair.second>1) r.push_back(pair.first);
        }
        return r;
    }
};