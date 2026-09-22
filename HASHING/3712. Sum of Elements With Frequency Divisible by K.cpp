class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {

        map <int,int> mp;

        int sum=0;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for(auto it:mp)
        {
            if(it.second%k==0)
            {
                for(int i=0;i<it.second;i++)
                {
                    sum=sum+it.first;
                }
            }
        }

        return sum;
        
    }
};
