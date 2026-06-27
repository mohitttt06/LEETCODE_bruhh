class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map <int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        vector <int> vec;

        for(auto it:mp)
        {
            vec.push_back(it.second);
        }

        sort(vec.begin(),vec.end(),greater<int>());
        vector <int> v;
        
        for(int i=0;i<k;i++)
        {

        
        for(auto &it:mp)
        {
            
            if(it.second==vec[i])
            {
                v.push_back(it.first);
                it.second=-1;
                break;

            }
            
        }
        }
        

        return v;

    }           
};              
