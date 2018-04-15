class Solution 
{
public:
    int reverse(int x) 
    {
        
        long int tme=0,rev=x;
        while(x!=0)
        {
            rev=x%10;
            x/=10;
            tme=tme*10+rev;
        }
        if(tme>INT_MAX || tme<INT_MIN)
            return 0;
        return tme;
    }
};
