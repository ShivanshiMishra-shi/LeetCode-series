class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(m*n != r*c)
        {
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int index=i*m+j;
                int newRow=index/c;
                int newCol=index%c;
                ans[newRow][newCol]=mat[i][j];
            }
        }
        return ans;

        
    }
};