class Solution {
public:
    int nCr(int n, int r) {
        if (r > n || r < 0) return 0;

        return (int)round(
            tgamma(n + 1) /
            (tgamma(r + 1) * tgamma(n - r + 1))
        );
    }
};