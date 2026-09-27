class Solution {
public:
    int alternateDigitSum(int n) {
        /*int count=0;
        int temp=n;
        while(temp>0)
        {
            count++;
            temp/=10;
        }
        int ans=0;
        int sign=1;
        while(n>0)
        {
            int digit=n%10;
            ans+=digit*sign;
            sign=-sign;
            n=n/10;
        }
        return ans;*/

        string s=to_string(n);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int digit=s[i]-'0';
            if(i%2==0)
            {
                ans+=digit;
            }
            else 
            {
                ans-=digit;
            }
        }
        return ans;
        
    }
};