class Solution {
public:
    bool sumGame(string num) {
        int n=num.size(),n2=n>>1;
        int diff=0;
        for(int i=0;i<n;i++)
        {
            const char c=num[i];
            bool isq =c=='?',half =i<n2;
            int isn=(half <<1)-1;

            int d=(-isq & 9)+(-!isq &(c-'0')<<1);

            diff+=isn *d;
        }
        return diff!=0;
        
    }
};