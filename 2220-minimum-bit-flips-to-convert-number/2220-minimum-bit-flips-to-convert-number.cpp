class Solution {
public:
    int minBitFlips(int start, int goal) {
        string s1, s2;

        // Convert start to binary string
        while (start > 0) {
            s1 = (start & 1 ? '1' : '0') + s1;
            start = start >> 1;
        }

        // Convert goal to binary string
        while (goal > 0) {
            s2 = (goal & 1 ? '1' : '0') + s2;
            goal = goal >> 1;
        }

        // Pad the shorter string with leading zeros
        if (s1.size() < s2.size()) {
            s1 = string(s2.size() - s1.size(), '0') + s1;
        } else if (s2.size() < s1.size()) {
            s2 = string(s1.size() - s2.size(), '0') + s2;
        }

        // Count the bit flips required
        int c = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) c++;
        }

        return c;
    }
};
