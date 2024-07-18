class Solution {
public:
    vector<string> ans;
    void generate(int open,int close,int n, string s)
    {
        if(s.size()==n*2)
        {
            ans.push_back(s);
            return;
        }
        if(open<n) generate(open+1,close,n,s+"(");
        if(close<open) generate(open,close+1,n,s+")");
    }
    vector<string> generateParenthesis(int n) 
    {   
        string s="";
        generate(0,0,n,s);
        return ans;
    }
};