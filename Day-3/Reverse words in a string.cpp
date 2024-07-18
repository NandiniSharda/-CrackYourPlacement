class Solution {
public:
    string reverseWords(string s) 
    {
        int n=s.size();
        if(n==0) return s;
        stack<string> st;
        string reverse;
        for(int i=0;i<n;i++)
        {
            string words;
            if(s[i]==' ') continue;
            while(i<n && s[i]!=' ')
            {
                words+=s[i];
                i++;
            }
            st.push(words);
        }
        while(!st.empty())
        {
            reverse+=st.top();
            st.pop();
            if(!st.empty())
            {
                reverse+=' ';
            }
        }
        return reverse;
    }
};