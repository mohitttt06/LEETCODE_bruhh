class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int ans=0;



        for(int i=0;i<nums.size();i++)
        {

            int og = nums[i];
            int c=0;

            while(og!=0)
            {
                int r = og%10;
                if(r>=0)
                {
                    c++;
                }


                og=og/10;
            }

            if(c%2==0)
            {
                ans++;
            }
        }

        return ans;
        
    }
};
