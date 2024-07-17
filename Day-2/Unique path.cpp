class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0) 
                {dp[i][j]=1; 
                continue;}
                int up = 0;
                int left = 0;
                // If we are not at the first row (i > 0), update 'up' with the value from the cell above.
                if (i > 0) up = dp[i - 1][j];
                // If we are not at the first column (j > 0), update 'left' with the value from the cell to the left.
                if (j > 0) left = dp[i][j - 1];
                dp[i][j] = up + left;
            }
        }
        return dp[m-1][n-1];
    }
};