class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int cun=0,find;
        if(needle=="")
            return 0;
        find=haystack.find(needle,0);
        if(find<0)
            return -1;
        
        return find;
        
    }
};
