class Solution
{
public:
    string tem;
    int len,top=-1,i=0;
    stack<int> st;
  
    
    bool isValid(string s) 
    {
        
        if(s.size()%2!=0)
            return false;
        
        while(i<s.size())
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
                st.push(s[i]);
            else
            {
                switch(s[i])
                {
                    case '}':
                        if(st.empty()||st.top()!='{')
                            return false;
                            break;
                    case ')':
                        if(st.empty()||st.top()!='(')
                           return false;
                           break;
                    case ']':
                        if(st.empty()||st.top()!='[')
                            return false;
                            break;
                }
                st.pop();
                
            }
            i++;
        }
        return st.empty();
    }
