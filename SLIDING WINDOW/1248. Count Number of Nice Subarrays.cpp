class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
                mp[nums[i]]=1;
            else
                mp[nums[i]]=0;
        }

        int l=0;
        int r=0;
        int c=0;
        int nice=0;
        int even=0;

        while(r<nums.size())
        {
            if(mp[nums[r]]==1)
            {
                c++;
                even=0;
            }

            r++;

            while(c>k)
            {
                if(mp[nums[l]]==1)
                {
                    c--;
                }

                l++;
            }

            if(c==k)
            {
                while(l<r && mp[nums[l]]==0)
                {
                    even++;
                    l++;
                }

                nice = nice + even + 1;
            }
        }

        return nice;
    }
};
