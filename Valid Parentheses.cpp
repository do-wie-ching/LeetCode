class Solution
{
public:
    string tem;
    int len,top=-1,i=0;
  
    
    bool isValid(string s) 
    {
        
        if(s.size()%2!=0)
            return false;
        
        while(i<s.size())
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
                push(s[i]);
            else
            {
                switch(s[i])
                {
                    case '}':
                        if(tpop()!='{')
                            return false;
                            break;
                    case ')':
                        if(tpop()!='(')
                           return false;
                           break;
                    case ']':
                        if(tpop()!='[')
                            return false;
                            break;
                }
                pop();
                
            }
            i++;
        }
        return empty();
    }
    
    void push(char data)
    {
        tem[++top]=data;
    }
    
    char pop()
    {
        char a=tem[top];
    	 top--;
        return a;
    }
    
    char tpop()
    {
        char a=tem[top];
        return a;
    }
    
    bool empty()
    {   
        return top<0;
    }
};
