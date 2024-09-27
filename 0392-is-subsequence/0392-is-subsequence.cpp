class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int n = s.size(), m = t.size();
        
        // Two pointer approach to check if s is a subsequence of t
        while (i < n && j < m) {
            if (s[i] == t[j]) {
                i++; // Move pointer in s if characters match
            }
            j++; // Always move pointer in t
        }
        
        // If all characters in s have been matched
        return i == n;
    }
};
