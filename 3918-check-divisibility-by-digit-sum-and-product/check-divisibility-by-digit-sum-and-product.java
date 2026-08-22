class Solution {
    public boolean checkDivisibility(int n) {
        int digitProduct=1;
        int digitSum=0;
        int temp=n;
        while(temp>0)
        {
            int digit=temp%10;
            digitSum +=digit;
            digitProduct *=digit;
            temp/=10;
        }
        int total=digitSum+digitProduct;
        if(total==0)
        {
            return false;
        }
        return(n%total==0);
        
    }
}