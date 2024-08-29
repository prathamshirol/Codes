class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        int uniqueCount = 0;
        
        // Iterate over the sorted string to count unique letters
        for (int i = 0; i < sentence.size(); ++i) {
            // If this is the first occurrence of a letter
            if (i == 0 || sentence[i] != sentence[i - 1]) {
                // Check if it is a lowercase letter
                if (sentence[i] >= 'a' && sentence[i] <= 'z') {
                    uniqueCount++;
                }
            }
        }
        
        // If we have all 26 letters, it is a pangram
        return uniqueCount == 26;
        
    }
};