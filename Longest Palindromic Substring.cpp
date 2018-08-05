#include<string>
#include<iostream>
#include <algorithm>

class Solution
{
public:
    std::string longestPalindrome(std::string s)
    {
        std::string tmp;
        int start=0,len=0,k=0,end=s.size()-1,E,S,str;

        if(s.empty() || s.size()==1)
            return s;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                S=i;
                E=i+1;
                check(s,S,E,str,len);
            }
            E=S=i;
            check(s,S,E,str,len);

        }

        return s.substr(str,len);
    }

private:
    void check(std::string s,int S,int E,int &str,int &len)
    {
        int step=1,lentm=0;
        while((S-step)>=0 && (E+step)<s.size())
        {
            if(s[S-step]!=s[E+step])
                break;
            step++;
        }
        lentm=E-S+step*2-1;

        if(lentm>len)
        {
            len=lentm;
            str=S-step+1;
        }
    }


};
