class Solution {
public:
    int findPeakElement(vector<int>& nums) {


        int ans=nums[0];
        int index;

        if(nums.size()==1)
        {
            return 0;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>ans)
            {
                ans=nums[i];
                index=i;

            }
        }
        
        return index;
    }
};
