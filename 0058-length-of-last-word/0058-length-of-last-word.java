class Solution {
    public int lengthOfLastWord(String s) {
        // Trim leading and trailing spaces
        s = trimFirstAndLastSpaces(s);
        
        int c = 0;
        int n = s.length(); // Get the length of the string
        
        // Start from the end of the string and move backwards
        for (int i = n - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') {
                c++;
            } else if (c > 0) { 
                break;
            }
        }
        
        return c;
    }

    private String trimFirstAndLastSpaces(String str) {
        int start = 0;
        int end = str.length() - 1;
        
        // Move start forward until the first non-space character
        while (start <= end && str.charAt(start) == ' ') {
            start++;
        }
        
        // Move end backward until the last non-space character
        while (end >= start && str.charAt(end) == ' ') {
            end--;
        }
        
        // Return the trimmed substring
        return str.substring(start, end + 1);
    }
}
