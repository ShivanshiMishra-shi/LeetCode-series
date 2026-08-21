int findLengthOfLCIS(int* nums, int numsSize) {
    int c=1;
    int ans=1;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]>nums[i-1])
        {
            c++;
            if(c>ans)
            {
                ans=c;
            }
        }
        else
        {
            c=1;
        }
    }
    return ans;
    
}