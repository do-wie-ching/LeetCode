class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        if(nums.empty())
            return 0;
        int len=nums.size(),cun=0;
        for(int i=0;i<len;i++)
            if(nums[i]!=val)
                 nums[cun++]=nums[i];



       return  cun;
    }
};
