class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<int,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector<int> v;
        for(const auto pair:m)
        {
            v.push_back(pair.second);
        }
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
                return false;
        }
        return true;
        
    }
};