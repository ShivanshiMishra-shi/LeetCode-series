class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int>mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=nums[i]+nums[i+1];
            if(mp.find(sum) != mp.end())
            {
                return true;
            }
            mp.insert(sum);
        }
        return false;   
        
    }
};