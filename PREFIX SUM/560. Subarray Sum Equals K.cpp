class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        if(nums.size()==1&&nums[0]==k)
        {
            return 1;

        }
        


        vector <int> v(nums.size());
        v[0] = nums[0];


        //prefix sum
        for(int i=1;i<nums.size();i++)
        {
            v[i] = v[i-1] + nums[i];
        }

       


        int l=0;
        int r=1;
        int c=0;


        for(int i=0;i<v.size();i++)
        {
        if(v[i]==k) c++;

        }
         

        while(l<nums.size())
        {
            if(r>=nums.size())
            {
               

                l++;
                r=l+1;
                continue;
            }
            
            if(v[r]-v[l]==k)
            {
                c++;
            }
            r++;

           
            
        }


        return c;


        
    }
};
