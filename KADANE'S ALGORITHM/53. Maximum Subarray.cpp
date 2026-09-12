class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;

        int sum=0,c=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                c++;
            }
            sum=sum+nums[i];

            if(sum<0)
            {
                sum=0;
            }
            if(sum>maxi)
            {
                maxi=sum;
            }
        }

        if(c==nums.size())
        {
            sort(nums.begin(),nums.end(),greater <int> ());

            return nums[0];
        }

        return maxi;
        
    }
};
