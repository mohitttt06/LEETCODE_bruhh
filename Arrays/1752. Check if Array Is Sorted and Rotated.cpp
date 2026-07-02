class Solution {
public:
    bool check(vector<int>& nums) {

        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }

        sort(v.begin(),v.end());

        int c=v.size();

        for(int k=0;k<nums.size();k++)
        {
            bool a = true;

            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=v[i])
                {
                    a=false;
                    break;
                }
            }

            if(a==true)
            {
                return true;
            }

            v.push_back(v[0]);
            v.erase(v.begin());
        }

        return false;
    }
};
