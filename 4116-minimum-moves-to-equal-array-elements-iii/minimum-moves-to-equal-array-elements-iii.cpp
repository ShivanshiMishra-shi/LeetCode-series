class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int m=*max_element(nums.begin(),nums.end());
        int sum=0;
        for(int num:nums)
        {
            sum+=num;
        }
        return m*n-sum;
        
    }
};