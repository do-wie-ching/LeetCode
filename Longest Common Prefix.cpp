#include <string.h>
class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if(strs.size()==0)
            return "";
        
        int minV = 0, n;
        bool check=true;
        string tem = strs[0];       
        
        vector<string>::const_iterator it = strs.begin(); //first element be going to find from strs

         for (++it; it != strs.end() && check; it++)//variable of check is checking whether input is common prefix
        {
            minV = min(tem.length(), (*it).length());
            for(int j=0;j<minV;j++)
            {
                if (tem.at(j) != (*it).at(j))//Find two characters are not same so stop searching
                {
                    tem = j > 0 ? tem.substr(0, j) : "";//Whether the string is not common 
                    check = tem==""?false:true;
                    break;
                }            
            }
            tem = !check ?  "":tem.substr(0, minV);
             
        }   
        return tem;
    }
};
