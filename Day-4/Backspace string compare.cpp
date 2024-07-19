class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char> st;
        stack<char> emp;
        for(char i: s)
        {
            if(i=='#')
            {
                if(!st.empty())  st.pop();
            }
            else st.push(i);
        }
        for(char i: t)
        {
            if(i=='#')
            {
                if(!emp.empty())  emp.pop();
            }
            else emp.push(i);
        }
        while(!st.empty() && !emp.empty())
        {
            if(st.top()!=emp.top())
            {
                return false;
            }
            st.pop();
            emp.pop();
        }
        return st.empty() && emp.empty();
    }
};