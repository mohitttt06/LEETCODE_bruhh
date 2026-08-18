class Solution {
public:
    int countPartitions(vector<int>& nums) {
        

        vector <int> v(nums.size());

        v[0]=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            v[i] = v[i-1]+nums[i];
        }

        int r = v[v.size()-1];

        int  c = -1;

        for(int i=0;i<v.size();i++)
        {
        

            if((abs(v[i]-(r-v[i])))%2==0)
            {
                c++;
            }
            
        }
        if(c==-1) return 0;
        else
        {
            return c;
        }

        


    }
};
