class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n=nums.size()-1;
        set<double>s;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n)
        {
            double avg=(nums[i]+nums[n])/2.0;
            s.insert(avg);
            i++;
            n--;
        }
        return s.size();

        
    }
};