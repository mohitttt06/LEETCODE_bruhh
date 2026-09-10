class Solution {
public:
    int countPairs(vector<int>& nums, int target) {

        int l=0;
        int r=1;


        int c=0;

        while(l<=nums.size()-1)
        {
            if(r>=nums.size())
            {
                l++;
                r=l+1;
            }
            if(r>=nums.size()) break;
            if((nums[l]+nums[r])<target)
            {
                c++;
            }
            r++;

        }

        return c;
        
    }
};
