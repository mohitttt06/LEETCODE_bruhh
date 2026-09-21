class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {

        int l=0;
        int r=1;

        int c=0;

        while(l<r)
        {
            if(r>=nums.size())
            {
                l++;
                r=l+1;
            }
            if(r>=nums.size()) break;
            if(abs(nums[l]-nums[r])==k)
            {
                c++;
            }
            r++;
        }

        return c;
        
    }
};
