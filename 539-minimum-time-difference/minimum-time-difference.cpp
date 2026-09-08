class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> times;

        for (string t : timePoints) {
            int hour = stoi(t.substr(0, 2));
            int min = stoi(t.substr(3, 2));

            int total = hour * 60 + min;

            times.push_back(total);
        }

        sort(times.begin(), times.end());

        int ans = INT_MAX;

        for (int i = 1; i < times.size(); i++) {
            ans = min(ans, times[i] - times[i - 1]);
        }

        ans = min(ans, 1440 - times.back() + times[0]);

        return ans;
    }
};