class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int  greatest=-1;
            for(int j=i+1;j<n;j++)
            {
                greatest=max(greatest,arr[j]);
            }
            arr[i]=greatest;
        }
        arr[n-1]=-1;
        return arr;
    }
};