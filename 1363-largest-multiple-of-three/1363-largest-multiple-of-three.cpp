class Solution {
public:
    string largestMultipleOfThree(vector<int>& digits) {
        vector<int> freq(10,0);
        int m[3] = {0}, sum =0;
        for(int &i:digits){
            freq[i]++;
            m[i%3]++;
            sum+= i;
        }
        if (sum % 3 != 0){
            if (sum % 3 == 1) {
                if (m[1] >= 1) {
                    for (int i = 1; i <= 9; i += 3) {
                        if (freq[i]) {
                            freq[i]--;
                            break;
                        }
                    }
                } else {
                    int cnt = 2;
                    for (int i = 2; i <= 9 && cnt; i += 3) {
                        while (freq[i] && cnt) {
                            freq[i]--;
                            cnt--;
                        }
                    }
                }
            }
            else { 
                if (m[2] >= 1) {
                    for (int i = 2; i <= 9; i += 3) {
                        if (freq[i]) {
                            freq[i]--;
                            break;
                        }
                    }
                }
                else {
                    int cnt = 2;
                    for (int i = 1; i <= 9 && cnt; i += 3) {
                        while (freq[i] && cnt) {
                            freq[i]--;
                            cnt--;
                        }
                    }
                }
            }
        }
        return doit(freq);
    }
    string doit(vector<int>& freq){
        string res = "";
        for (int i = 9; i >= 0; i--) {
            while (freq[i]--)
                res += char(i + '0');
        }
        if(res[0] == '0')
            return "0";
        return res;
    }
};