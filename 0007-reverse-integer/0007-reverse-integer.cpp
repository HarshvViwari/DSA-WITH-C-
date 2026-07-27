class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int dig = x % 10;

            if (rev > 214748364 || (rev == 214748364 && dig > 7))
                return 0;

            if (rev < -214748364 || (rev == -214748364 && dig < -8))
                return 0;

            rev = rev * 10 + dig;
            x /= 10;
        }

        return rev;
    }
};