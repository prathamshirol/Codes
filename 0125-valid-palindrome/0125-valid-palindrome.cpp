#include <string>
#include <cctype> // For tolower function
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        
        // Build the filtered and lowercase string `p`
        for(int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) { // Check if character is alphanumeric
                p += tolower(s[i]); // Convert to lowercase and append to `p`
            }
        }
        
        // Check if the string `p` is a palindrome
        int n = p.size();
        for (int i = 0; i < n / 2; i++) {
            if (p[i] != p[n - 1 - i]) {
                return false; // Not a palindrome
            }
        }
        
        return true; // It is a palindrome
    }
};
