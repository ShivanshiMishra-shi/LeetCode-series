class Solution {
public:
    int ans = 0;

    void solve(vector<int>& nums, int i, int currentXor) {
        if(i == nums.size()) {
            ans += currentXor;
            return;
        }
        solve(nums, i + 1, currentXor ^ nums[i]);
        solve(nums, i + 1, currentXor);
    }

    int subsetXORSum(vector<int>& nums) {
        solve(nums, 0, 0);
        return ans;
    }
};