class Solution {
public:
    vector<string> printVertically(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss >> word)
        {
            words.push_back(word);
        }
        int maxl = 0;
        for(string word : words)
        {
            maxl = max(maxl, (int)word.size());
        }
        vector<string> ans;
        for(int j = 0; j < maxl; j++)
        {
            string temp = "";
            for(int i = 0; i < words.size(); i++)
            {
                if(j < words[i].size())
                {
                    temp += words[i][j];
                }
                else
                {
                    temp += " ";
                }
            }
            while(!temp.empty() && temp.back() == ' ')
            {
                temp.pop_back();
            }
            ans.push_back(temp);
        }
        return ans;
    }
};