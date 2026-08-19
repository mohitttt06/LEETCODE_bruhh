class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        int l=0;
        int r=n;

        vector <int> v;


        while(l<=n&&r<nums.size())
        {

            v.push_back(nums[l]);
            v.push_back(nums[r]);
            l++;
            r++;

        }
        return v;
        
    }
};
