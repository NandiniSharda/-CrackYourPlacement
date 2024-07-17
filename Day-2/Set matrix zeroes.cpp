class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        unordered_set<int> setrows;
        unordered_set<int> setcolumns;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    setrows.insert(i);
                    setcolumns.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(setrows.count(i)>0 || setcolumns.count(j)>0)
                {
                    matrix[i][j]=0;
                }
            }
        }        
    }
};