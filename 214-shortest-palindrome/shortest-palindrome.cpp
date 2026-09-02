class Solution {
public:
    string shortestPalindrome(string s) {
        string str= s;
        reverse(str.begin(),str.end());
        string t=s+"#"+str;
        int n=t.size();
        vector<int>lps(n,0);
        int i=1;
        int len=0;
        while(i<n)
        {
            if(t[i]==t[len])
            {
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len !=0)
                {
                    len=lps[len-1];
                }
                else
                {
                    i++;
                }
            }
        }
        int ind=lps[n-1];
        string suffix=s.substr(ind);
        reverse(suffix.begin(),suffix.end());
        return suffix+s;


        
    }
};