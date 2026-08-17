class Solution {
public:
    bool checkZeroOnes(string s) {
        // code here
        int num0=0,num1=0;
        int cur1 =0;
        int cur0 =0;
        
        for(char i : s){
            if(i == '0'){
                cur0++;
                cur1=0;
                num0 = max(num0,cur0);
            }else{
                cur1++;
                cur0 = 0;
                num1 = max(num1,cur1);
            }
        }
        
        if(num0 < num1) return 1;
        else return 0;
    }
};