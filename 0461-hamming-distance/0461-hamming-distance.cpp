class Solution {
public:
    int hammingDistance(int x, int y) {
        int c = 0;
        string s1, s2;

        // Convert x to binary string
        while (x > 0) {
            s1 = char((x & 1) + '0') + s1;
            x = x >> 1;
        }

        // Convert y to binary string
        while (y > 0) {
            s2 = char((y & 1) + '0') + s2;
            y = y >> 1;
        }

        // Ensure both strings have the same length by padding with leading zeros
        while (s1.size() < s2.size()) s1 = '0' + s1;
        while (s2.size() < s1.size()) s2 = '0' + s2;

        // Count the number of differing bits
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                c++;
            }
        }

        return c;
    }
};
