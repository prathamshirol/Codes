class Solution {
public:
    string longestPalindrome(string s) {
        string k = s;
    reverse(k.begin(), k.end());
    
    int n = s.size();
    int p = k.size();
    
    // DP table to store lengths of longest common substrings
    int dp[n + 1][p + 1];
    
    // Initialize the DP table with zeros
    memset(dp, 0, sizeof(dp));
    
    int maxLength = 0;
    int endIndex = 0; // Variable to store the end index of the longest palindromic substring

    // Fill the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= p; j++) {
            if (s[i - 1] == k[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                
                // Update the maximum length and end index
                if (dp[i][j] > maxLength && (i - dp[i][j]) == (p - j)) {
                    maxLength = dp[i][j];
                    endIndex = i - 1;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    // Return the longest palindromic substring
    return s.substr(endIndex - maxLength + 1, maxLength);
    }
};