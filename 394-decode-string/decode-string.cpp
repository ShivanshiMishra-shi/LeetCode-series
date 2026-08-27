class Solution {
public:
    string decodeString(string s) {
        stack<int>nums;
        stack<string> strs;
        int num=0;
        string curr="";
        for(char c:s)
        {
            if(isdigit(c))
            {
                num=num*10+(c-'0');
            }
            else if(c=='[')
            {
                nums.push(num);
                strs.push(curr);

                num=0;
                curr="";
            }
            else if(c==']')
            {
                int repeat=nums.top();
                nums.pop();
                string prv=strs.top();
                strs.pop();

                string temp="";
                for(int i=0;i<repeat;i++)
                {
                    temp+=curr;
                } 
                curr=prv+temp;           
            }
            else
            {
                curr+=c;
            }
        }
        return curr;    
        
    }
};