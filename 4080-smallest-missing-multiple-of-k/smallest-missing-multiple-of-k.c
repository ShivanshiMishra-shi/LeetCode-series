int missingMultiple(int* nums, int numsSize, int k) {
    int found=1;
    int ans=k;
    while(1)
    {
        found=0;
        for(int i=0;i<numsSize;i++)
        {
            if(nums[i]==ans)
            {
                found=1;
                break;
            }

        } 
        if(found==0)
       {
           return ans;
       }
       ans+=k;
    }
    
}