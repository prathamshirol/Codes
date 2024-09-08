class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;

    string temp1 = bitset<32>(x).to_string();
   string temp2 =  bitset<32>(y).to_string();    // num change ho gya bit m  firr usse string m change kar dia
        
        for(int i = 0;i<temp1.size();i++){
           
                if(temp1[i] != temp2[i]){
                    count++;
                }
            
        }
        return count;
      


     
    }
};