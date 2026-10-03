class Solution {
public:
    int minMoves2(vector<int>& nums) {

        vector <int> v;
        v.insert(v.end(),nums.begin(),nums.end());

        sort(v.begin(),v.end());
        int mid = v[v.size()/2];

        int c=0;

        for(int i=0;i<nums.size();i++)
        {

            if(nums[i]>mid)
            {
                c=c+(nums[i]-mid);
            }
            else if(nums[i]<mid)
            {
                c=c+(mid-nums[i]);
            }
            else if(nums[i]==mid)
            {
                c=c+0;
            }

        }

        return c;
        
    }
};
