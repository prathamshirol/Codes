class Solution {
public:
    bool checkPerfectNumber(int num) {
        int k=num;
        int s=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
                s=s+i;
        }
        if(num==s) return true;
        return false;
    }
};