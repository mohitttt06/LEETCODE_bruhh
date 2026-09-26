class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int l=0;
        int r=0;
        int c=0;

        while(r<nums.size())
        {
            if(r==0 || nums[r]!=nums[r-1])
            {
                c=1;
            }
            else
            {
                c++;
            }

            if(c<=2)
            {
                nums[l]=nums[r];
                l++;
            }

            r++;
        }

        return l;
    }
};
