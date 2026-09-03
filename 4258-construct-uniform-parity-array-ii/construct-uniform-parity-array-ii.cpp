class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn=INT_MAX;
        for(int i:nums1)
        {
            mn=min(mn,i);
        }
        if(mn%2 !=0)
        {
            return true;
        }
        for(int i:nums1)
        {
            if(i%2!=0)
            {
                return false;
            }
        }
        return true;
        
    }
};