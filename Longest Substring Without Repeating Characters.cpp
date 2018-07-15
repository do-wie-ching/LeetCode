class Solution {
public:
    int lengthOfLongestSubstring(std::string s)
    {
        std::map <char,int>substring;
        int p=0,len=1;// second index start index

        if(s.empty())
            return 0;

        std::map<char,int>::iterator it; // It was used to find repeat value
        substring.insert(std::pair<char,int>(s[0],0));

        for(int i=1;i<s.size();)
        {
            it=substring.find(s.at(i));
           if(it==substring.end())// If no repeat value
                substring.insert(std::pair<char, int>(s[i], i));
           else
           {
               p=substring[s[i]]>=p ? it->second+1 : p;// If repeat value is bigger than p then use it's next index
               substring[s[i]]=i;// Store index of repeat value
           }
            len=std::max(len,(i-p)+1);
            i++;
        }
        return len;
    }
};
