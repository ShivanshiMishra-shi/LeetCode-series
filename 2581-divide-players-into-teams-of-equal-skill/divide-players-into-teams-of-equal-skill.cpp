class Solution {
public:
    long long dividePlayers(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;

        int target = nums[i] + nums[j];

        long long count = 0;

        while(i < j) {
            if(nums[i] + nums[j] != target) {
                return -1;
            }

            count += (long long)nums[i] * nums[j];

            i++;
            j--;
        }

        return count;
    }
};