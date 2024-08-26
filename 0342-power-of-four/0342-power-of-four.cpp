class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n > 0 && (n & (n - 1)) == 0) {  // Check if n is a power of two
        if (__builtin_ctz(n) % 2 == 0) {  // Check if the number of trailing zeros is even
            return true;
        }
    }
    return false;
    }
};