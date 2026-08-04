class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {


        sort(nums.begin(),nums.end());

        int s=nums[0];
        int l=nums[nums.size()-1];

        vector <int> v;
        
        int c=s;

        for(int i=s;i<l;i++)
        {

            if(find(nums.begin(),nums.end(),c)==nums.end())
            {
                v.push_back(c);
            }
            c++;

        }


        sort(v.begin(),v.end());

        return v;
    }
};
