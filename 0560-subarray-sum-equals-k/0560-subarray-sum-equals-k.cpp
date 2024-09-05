class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int s=0;
        int c=0;
        
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
            if(s==k)
                c++;
            int rem=s-k;
            if(m.find(rem)!=m.end())
            {
                c=c+m[rem];
            }
            m[s]++;
        }
        return c;
    }
};
