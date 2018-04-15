class Solution 
{
public:
    
    int myAtoi(string str) 
    {
        int tmp=1,atoi=0;
        int i=str.find_first_not_of(' ');
        
        if(str[i]=='+' || str[i]=='-')
            tmp= (str[i++]=='-')? -1:1; 
            
        while('0'<=str[i] && str[i]<='9')
        {
             atoi=atoi*10+str[i++]-'0';
            //atoi=calcu(atoi,str[i++]-'0');
             if(atoi*tmp>=INT_MAX  || atoi*tmp<=INT_MIN)
                return (atoi*tmp>=INT_MAX)? INT_MAX:INT_MIN;
        }
        return atoi*tmp;
    }
    int calcu(int atoi ,int num)
    {
        return ((atoi*10)+num);
    }
};
