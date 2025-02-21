class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector <int> r;
        map<int,int> m;

        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }

       for(const auto & it:m)
       {
        if(it.second==2)
        {
            r.push_back(it.first);
        }
       }
        return r;
    }
};