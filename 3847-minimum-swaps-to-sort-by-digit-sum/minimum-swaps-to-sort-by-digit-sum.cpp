class Solution {
public:
    int f(int x)
    {
        int sum=0;
        while(x>0)
        {
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>sum(n);
        for(int i=0;i<n;i++)
        {
            sum[i]={f(nums[i]),nums[i]};

        }
        sort(sum.begin(),sum.end());
        unordered_map<int,int>value;
        for(int i=0;i<n;++i)
        {
            value[sum[i].second]=i;
        }
        vector<bool>visited(n,false);
        int cycle=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                cycle++;

                int currentIndex=i;
                while(!visited[currentIndex])
                {
                    visited[currentIndex]=true;
                    currentIndex=value[nums[currentIndex]];
                }    
            }
        }
        return n-cycle;
        
    }
};