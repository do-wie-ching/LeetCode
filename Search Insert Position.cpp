class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int left=0,right=nums.size()-1,mid,tem;
        
        
        while(left<=right)
        {
            mid=left+(right-left)/2;
            
            if(nums[mid]==target)
               return mid;
            else if(nums[mid]>target)
                tem=right=mid-1;
            else if(nums[mid]<target)
                tem=left=mid+1;    
        }
            return left;
        
        
    }
};
