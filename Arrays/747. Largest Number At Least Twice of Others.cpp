class Solution {
public:
    int dominantIndex(vector<int>& nums) {


        vector <int> v(nums.begin(),nums.end());

        sort(v.begin(),v.end(),greater<int>());



        int max=v[0];
        int c=0;

        for(int i=1;i<=v.size()-1;i++)
        {
            if(max>=v[i]*2)
            {
                c=c+1;
                
            }
            else
            {
                c=-1;
            }
            
        }
        int final;
        if(c==v.size()-1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(max==nums[i])
                {
                    final =i;
                    break;

                }


            }

        }

        else if(c==-1)
        {
             final =-1;
        }

        return final;


        
    }
};
