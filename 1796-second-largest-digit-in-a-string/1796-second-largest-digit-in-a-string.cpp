class Solution {
public:
    int secondHighest(string s) {
        sort(s.begin(), s.end());
        int l =-1;
        int sl =-1;

        for(char c : s){
            if(isdigit(c)){
                if((c - '0') > l){
                    sl = l;
                    l = (c - '0');
                }
            }
        }

        
        return sl;
    }
};