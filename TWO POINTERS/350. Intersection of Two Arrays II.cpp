class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        

        map <int,int> mp1;
        

        for(int i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]++;
        }

        map <int,int> mp2;

        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;
        }

        map <int,int> mp;

        for(auto it:mp1)
        {
            for(auto i:mp2)
            {
                if(it.first==i.first)
                {
                    if(it.second>0&&i.second>0)
                    {
                        mp[it.first] = min(it.second,i.second);
                    }
                }
            }
        }


        vector <int> ans;

        for(auto it:mp)
        {
            for(int i=0;i<it.second;i++)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
        




    }
};
