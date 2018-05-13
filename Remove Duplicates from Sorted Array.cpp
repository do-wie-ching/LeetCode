class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int cun=0;
        int size=nums.size();
        if(size<=0)
            return 0;
        for(int i=1;i<size;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                cun++;
                nums[cun]=nums[i];
            }
                 
        }
        return ++cun;
    }
};Remove Duplicates from Sorted Array
