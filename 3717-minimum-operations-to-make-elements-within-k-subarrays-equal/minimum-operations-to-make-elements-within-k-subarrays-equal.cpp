class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();
        const long long INF = 1e18;

        multiset<int> lo, hi;
        long long sumLo = 0, sumHi = 0;

        auto balance = [&]() {
            while (lo.size() > hi.size() + 1) {
                int v = *lo.rbegin();
                lo.erase(prev(lo.end()));
                sumLo -= v;
                hi.insert(v);
                sumHi += v;
            }

            while (lo.size() < hi.size()) {
                int v = *hi.begin();
                hi.erase(hi.begin());
                sumHi -= v;
                lo.insert(v);
                sumLo += v;
            }
        };

        auto add = [&](int v) {
            if (lo.empty() || v <= *lo.rbegin()) {
                lo.insert(v);
                sumLo += v;
            } else {
                hi.insert(v);
                sumHi += v;
            }
            balance();
        };

        auto remove = [&](int v) {
            auto it = lo.find(v);

            if (it != lo.end()) {
                lo.erase(it);
                sumLo -= v;
            } else {
                it = hi.find(v);
                hi.erase(it);
                sumHi -= v;
            }
            balance();
        };

        vector<long long> cost(n - x + 1);

        for (int i = 0; i < n; i++) {
            add(nums[i]);

            if (i >= x) {
                remove(nums[i - x]);
            }

            if (i >= x - 1) {
                long long med = *lo.rbegin();
                cost[i - x + 1] =
                    med * (long long)lo.size() - sumLo +
                    sumHi - med * (long long)hi.size();
            }
        }

        vector<vector<long long>> dp(
            k + 1, vector<long long>(n + 1, INF)
        );

        for (int i = 0; i <= n; i++) {
            dp[0][i] = 0;
        }

        for (int j = 1; j <= k; j++) {
            for (int i = 1; i <= n; i++) {
                dp[j][i] = dp[j][i - 1];

                if (i >= x && dp[j - 1][i - x] != INF) {
                    dp[j][i] = min(
                        dp[j][i],
                        dp[j - 1][i - x] + cost[i - x]
                    );
                }
            }
        }

        return dp[k][n];
    }
};