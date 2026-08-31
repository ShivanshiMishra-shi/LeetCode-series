class Solution {
public:
    vector<int> dp;

    bool wordBreakRec(int i, string &s, vector<string>& dictionary)
    {
        if(i == s.length())
            return true;

        if(dp[i] != -1)
            return dp[i];

        string prefix = "";

        for(int j = i; j < s.length(); j++)
        {
            prefix += s[j];

            if(find(dictionary.begin(), dictionary.end(), prefix)
                != dictionary.end())
            {
                if(wordBreakRec(j + 1, s, dictionary))
                    return dp[i] = true;
            }
        }

        return dp[i] = false;
    }

    bool wordBreak(string s, vector<string>& dictionary)
    {
        dp.resize(s.length(), -1);

        return wordBreakRec(0, s, dictionary);
    }
};