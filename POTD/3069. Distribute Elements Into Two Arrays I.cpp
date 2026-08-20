class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {

        vector <int> a1(1);
        a1[0] = nums[0];
        vector <int> a2(1);
        a2[0] = nums[1];

        for(int i=2;i<nums.size();i++)
        {
            int n1 = a1.size();
            int n2 = a2.size();

            if(a1[n1-1]>a2[n2-1])
            {
                a1.push_back(nums[i]);
            }
            else
            {
                a2.push_back(nums[i]);
            }
        }

        vector <int> ans;
        ans.insert(ans.end(),a1.begin(),a1.end());

        ans.insert(ans.end(),a2.begin(),a2.end());

        return ans;

        

        
        
    }
};
