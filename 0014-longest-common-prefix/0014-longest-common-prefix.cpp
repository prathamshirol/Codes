class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string common=strs[0];
        for(string s:strs)
        {
            for(int i=0;i<common.size();i++)
            {
                if(s[i]!=common[i])
                    common.erase(i,common.size());
            }
        }
        return common;
    }
};