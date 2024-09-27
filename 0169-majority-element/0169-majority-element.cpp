class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int k=0;
        int p=0;
        for(const auto & pair:m)
        {
            if(pair.second>k)
            {
                k=pair.second;
                p=pair.first;
            }
        }
        return p;;
    }
};