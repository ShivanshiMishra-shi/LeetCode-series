class Solution {
public:
    int arrangeCoins(int n) {
        long long N = n;  
        return (int)((-1 + sqrt(8 * N + 1)) / 2);
    }
};