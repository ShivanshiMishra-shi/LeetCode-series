class Solution {
public:
    int numPrimeArrangements(int n) {
        int prime=0;
        for(int i=2;i<=n;i++)
        {
            bool isPrime=true;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    isPrime=false;
                    break;
                }
            }
            if(isPrime)
            {
                prime++;
            }
        }
        int nprime=n-prime;
        long long ans=1;
        for(int i=1;i<=prime;i++)
        {
            ans=(ans*i)%1000000007;
        }
        for(int i=1;i<=nprime;i++)
        {
            ans=(ans*i)%1000000007;
        }
        return ans;

        
    }
};