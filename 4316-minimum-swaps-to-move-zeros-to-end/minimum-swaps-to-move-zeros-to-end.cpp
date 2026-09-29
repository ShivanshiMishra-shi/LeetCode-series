class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zero=0;
        for(int x:nums)
        {
            if(x==0)
            {
                zero++;
            }
        }
        int count=0;
        int n=nums.size();
        for(int i=0;i<n-zero;i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
        }
        return count;
        
    }
};