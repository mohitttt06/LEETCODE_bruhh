class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {


        long long int c=0;
        long long int temp=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                c=c+1;
                if(c>temp)
                {
                   temp=c;
                }
            }
            else if(nums[i]==0)
            {
                
                c=0;
                
                
            }
        }

        return temp;
        
    }
};
