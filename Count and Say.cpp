class Solution 
{
    string str="",s="";
    int cun=1;
    public:
      string countAndSay(int n) 
     {
            if(n==1)
                return "1";
            str=countAndSay(n-1);
            for(int i=0;i<str.length();i++)
            {
                s="";
                cun=1;
                while(i+1<str.length() && str[i]==str[i+1])
                {    
                    cun++;
                    i++;
                }

                s+=to_string(cun)+str[i];
            }
            return s;
        }
};
