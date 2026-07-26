class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int l=0;
        int m=l+1;
        int n=nums.size()-1;

        sort(nums.begin(),nums.end());

        vector <vector<int>> result;

        while(l < nums.size() - 2)
        {
            int sum = nums[l]+nums[m]+nums[n];

            if(m>=n&&l+1<nums.size()&&l+2<nums.size())
            {
                l++;
                m=l+1;
                n=nums.size()-1;
            }

            else if(sum<0&&m+1<nums.size())
            {
                m++;
            }
            else if(sum>0)
            {
                n--;
            }
            
            else if(sum==0&&l+1<nums.size()&&l+2<nums.size())
            {
                result.push_back({nums[l],nums[m],nums[n]});
                m++;
            }
        }

        set<vector<int>> st(result.begin(),result.end());

        vector<vector<int>> final(st.begin(),st.end());

        return final;
        
    }
};
