class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.size()==0) return " ";
        if(strs.size()==1) return strs[0];

        int small=INT_MAX;
        bool flag=true;

        for(string i:strs)
        {
            if(i.size()<small)
            {
                small=i.size();
            }
        }

        while(small)
        {
            flag=true;
            for(int i=0;i<strs.size()-1;i++)
            {
                if(strs[i].substr(0,small)!=strs[i+1].substr(0,small))
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                return strs[0].substr(0,small);
            }
            small--;
        }
        return "";
    }
};