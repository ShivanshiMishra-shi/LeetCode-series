bool divideArray(int* nums, int numsSize) {
    int count[501]={0};
    for(int x=0;x<numsSize;x++)
    {
        count[nums[x]]++;
    }
    for(int i=0;i<=500;i++)
    {
        if(count[i]%2!=0)
        {
            return false;
        }
    }
    return true;
}  