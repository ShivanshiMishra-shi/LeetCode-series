int sumOfSquares(int* nums, int numsSize) {
    int n=numsSize;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            ans+=nums[i-1]*nums[i-1];
        }
    }
    return ans;
    
}