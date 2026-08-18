class Solution {
public:
    int subarraySum(vector<int>& nums) {


        int start = max(0,0-nums[0]);

        int c=0;

        for(int i=0;i<nums.size();i++)
        {

            start = max(0,i-nums[i]);

            for(start;start<=i;start++)
            {
                c=c+nums[start];
            }

            
        }

        return c;
        
    }
};
