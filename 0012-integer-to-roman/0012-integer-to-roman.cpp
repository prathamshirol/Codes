class Solution {
public:
    string intToRoman(int num) {
         map<int, string> ans;
        ans[1000] = "M";
        ans[900] = "CM";
        ans[500] = "D";
        ans[400] = "CD";
        ans[100] = "C";
        ans[90] = "XC";
        ans[50] = "L";
        ans[40] = "XL";
        ans[10] = "X";
        ans[9] = "IX";
        ans[5] = "V";
        ans[4] = "IV";
        ans[1] = "I";
        string res = "";
        for (auto i = ans.rbegin(); i != ans.rend(); ++i) {
            int a = i->first;
            string b = i->second;
            while (num >= a) {
                res += b;
                num -= a;
            }
        }
        return res;
    }
};