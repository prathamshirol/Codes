class Solution {
public:
    int countOdds(int low, int high) {
        int c=0;
        while(low<=high)
        {
            if(low%2!=0)
            {
                c++;
            }
            low++;
        }
        return c;;
    }
};