class Solution {
public:
    string replaceDigits(string s) {
       string ans;
        char temp;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]))
            {
                ans.push_back(s[i]);
                temp = s[i];
            }
            else
            {
                temp = s[i - 1]+(s[i] - '0');
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};