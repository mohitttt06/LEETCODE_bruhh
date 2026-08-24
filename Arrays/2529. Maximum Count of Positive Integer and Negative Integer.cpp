class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n=0,z=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                n++;
            }
            else if(nums[i]==0)
            {
                z++;
            }
            else
            {
                break;
            }

        }
        int p=nums.size()-z-n;

        int ans = max(n,p);

        return ans;
        
        
    }
};
