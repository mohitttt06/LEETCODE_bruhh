class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {


        int n=nums.size()/2;

        map <int,int> mp;

        for(auto it:nums)
        {
            mp[it]++;
        }
        
        int ans;
        for(auto it:mp)
        {
            if(it.second==n)
            {
              ans=it.first;
              break;
            }
        }

        return ans;
       
        
     }
};
