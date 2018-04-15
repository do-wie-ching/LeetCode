#include <sstream>
using namespace::std;
class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        string s;
        int left,right;
        stringstream ss;
        if(x<0 || (x%10==0 && x!=0) ||(x>INT_MAX|| x<INT_MIN))
            return false;
        ss<<x;
        s=ss.str();
        left=0;
        right=s.size()-1;
        
        while(left<right)
            if(s[left++]!=s[right--])
                return false;
        
            
        return true;
        
            
    }
};
