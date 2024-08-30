class Solution {
public:
    int minimizedStringLength(string s) {
        map<int,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        return m.size();
    }
};