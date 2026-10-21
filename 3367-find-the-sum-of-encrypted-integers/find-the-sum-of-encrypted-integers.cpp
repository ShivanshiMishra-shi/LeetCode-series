class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int x:nums)
        {
            string s=to_string(x);
            char mx=*max_element(s.begin(),s.end());
            string encrypted(s.size(),mx);
            sum+=stoi(encrypted);
        }
        return sum;
        
    }
};