class Solution 
{
public:
    int romanToInt(string s)
    {
        int result=0,pre=0,cur;
        map <char,int> romanToNu
        {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        
        
        for(int i=0;i<s.size();i++)
        {    
            cur=romanToNu.find(s[i])->second;
            if(pre<cur)
            {
                result-=pre;
                result+=(cur-pre);
            }
               
            else
                result+=cur;
            
            pre=cur;//record pervious number
            
        }
        return result;
        
        
    }
};