class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=0;

        for(char ch : columnTitle){
            int num = ch - 'A' + 1;

            n = n * 26 + num;
        }
        return n;
    }
};