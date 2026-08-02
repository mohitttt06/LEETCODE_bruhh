class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        map <int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        int first;

        for(auto it:mp)
        {
            if(it.second==2)
            {
                first = it.first;
                break;

            }
        }

        int second;

        set <int> st(nums.begin(),nums.end());

        for(int i=1;i<=nums.size();i++)
        {

            
            if(st.find(i)==st.end())
            {
                second=i;
                break;
                

            }
        }

        vector <int> v;

        v.push_back(first);
        v.push_back(second);
        return v;
        
    }
};
