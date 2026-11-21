class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {

            if (i == nums.size() - 1 || nums[i] != nums[i+1]) {
                count++;
            }

            if (count == 3) {
                return nums[i];
            }
        }

        return nums[nums.size()-1];
    }
};