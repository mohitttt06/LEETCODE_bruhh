class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set <int> v(nums.begin(),nums.end());
        vector <int> final(v.begin(),v.end());
        if(final.size()>=3)
        {
            return final[final.size()-3];
        }

        else if(final.size()==1)

        {
            return final[0];

        }

        else
        {
            return final[1];
        }
    
        
    }
};
