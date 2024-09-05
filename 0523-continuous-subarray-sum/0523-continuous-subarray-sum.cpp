class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        map<int, int> mp;
        mp[0] = -1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(mp.find(sum%k) != mp.end()){
                if(i - mp[sum%k] >= 2) return true;
            } else {
                mp[sum%k] = i;
            }
            
        }
        return false;
    }
};