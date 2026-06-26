class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map <int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        int ans=0;
        float n=nums.size()/2;
        for(auto it:mp)
        {
            if(it.second>n)
            {
                ans=it.first;
            }
        }

        return ans;
    }
};
