class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        vector <int> v;

        vector <int> w;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                v.push_back(nums[i]);
            }
            else
            {
                w.push_back(nums[i]);
            }
        }

        
        vector <int> ans;

        for(int i=0;i<v.size();i++)
        {
            ans.push_back(v[i]);
        }

        for(int i=0;i<w.size();i++)
        {
            ans.push_back(w[i]);
        }


        return ans;




        
    }
};
