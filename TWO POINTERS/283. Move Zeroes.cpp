class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       

       int c=0;

        for(auto i:nums)
        {
            if(i==0)
            {
                c++;
            }
        }

        if(c==0)
        {
            for(auto i:nums)
            {
                cout << i;
            }
            return;
        }

        

        

        int s=0;

        for(int f=1;f<nums.size();f++)
        {
            if(nums[s]==0&&nums[f]!=0)
            {
                nums[s]=nums[f];
                nums[f]=0;
                s++;
            }
            else if(nums[s]!=0&&nums[f]==0)
            {
                s++;
            }
            else if(nums[s]!=0&&nums[f]!=0)
            {
                s++;
            }

        }

        for(int i=0;i<nums.size();i++)
        {
            cout << nums[i];
        }
        
    }
};
