class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int minSum=INT_MAX;
        vector<string>ans;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if(list1[i]==list2[j])
                {
                    int sum=i+j;
                    if(sum<minSum)
                    {
                        minSum=sum;
                        ans.clear();
                        ans.push_back(list1[i]);
                    }
                    else if(minSum==sum)
                    {
                        ans.push_back(list1[i]);
                    }
                }
            }
        }
        return ans;
        
    }
};