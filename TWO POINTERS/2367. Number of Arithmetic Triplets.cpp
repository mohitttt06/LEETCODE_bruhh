class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        if(nums.size()==3)
        {
            if(nums[1]-nums[0]==diff&&nums[2]-nums[1]==diff)
            {
                return 1;

            }
            else
            {
                return 0;
            }
        }


        int l=0;
        int m=1;
        int n=2;


        int c=0;

        while(l<nums.size()-2)
        {
            if(n<nums.size())
            {
                if(nums[m]-nums[l]==diff &&
                   nums[n]-nums[m]==diff)
                {
                    c++;
                }

                n++;
            }
            else
            {
                m++;

                if(m>=nums.size()-1)
                {
                    l++;
                    m=l+1;
                }

                n=m+1;
            }
        }

        return c;

             
    }
};
