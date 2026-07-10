class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        map <int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            bool ans=false;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j) continue;
                if(nums[i]>nums[j])
                {
                    mp[i]++;
                    ans=true;
                }
                
            }

            if(ans==false)
            {
                mp[i]=0;
            }
        }

        vector <int> v;

        for(auto it:mp)
        {
                v.push_back(it.second);
        }
        
        return v;
    }
};
