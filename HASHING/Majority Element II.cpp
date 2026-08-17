class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map <int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            
        }

        vector <int> ans;

        int n=nums.size();

        for(auto it:mp)
        {
            int k = it.second;

            if(k>(n/3))
            {
                ans.push_back(it.first);
            }


        }

        return ans;
        
    }
};
