class Solution {
public:
    int bestClosingTime(string customers) {
        int a=0,b=0,hour=-1;

        for(int i=0; i< customers.size(); i++){
            b += (customers[i] == 'Y') ? 1 : -1;

            if(b > a){
                a =b;
                hour = i;
            }
        }
        return hour + 1;
    }
};