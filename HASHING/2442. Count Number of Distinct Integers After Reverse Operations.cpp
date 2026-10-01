class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        

        int l = nums.size();

        for(int i=0;i<l;i++)
        {
            string s = to_string(nums[i]);

            reverse(s.begin(),s.end());

            int n = stoi(s);

            nums.push_back(n);
        }

        set <int>  k;
        k.insert(nums.begin(),nums.end());

        return k.size();
        
    }
};
