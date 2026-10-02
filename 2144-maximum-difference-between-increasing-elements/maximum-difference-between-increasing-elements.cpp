class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minElement = nums[0];
        int ans = -1;

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] > minElement) {
                ans = max(ans, nums[j] - minElement);
            }

            minElement = min(minElement, nums[j]);
        }

        return ans;
    }
};