class Solution {
public:
    bool isThree(int n) {
        int total=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                total++;
            }
        }
        return total==3;
        
    }
};