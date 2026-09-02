class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int maximum = *max_element(nums.begin(), nums.end());
        int minimum = *min_element(nums.begin(), nums.end());

        int maxin = 0;
        int miniidx = 0;

        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(nums[i] == maximum)
                maxin = i;

            if(nums[i] == minimum)
                miniidx = i;
        }

        int left = min(miniidx, maxin);
        int right = max(miniidx, maxin);

        int ans = min({
            right + 1,
            n - left,
            left + 1 + n - right
        });

        return ans;
    }
};