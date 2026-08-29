class Solution {
public:
    int findLucky(vector<int>& arr) {

        map <int,int> mp;

        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }

        vector <int> v;

        for(auto it:mp)
        {
            if(it.second==it.first)
            {
                v.push_back(it.first);
            }
        }

        sort(v.begin(),v.end(),greater<int>());

        if(v.size()==0)
        {
            return -1;
        }
        else
        {
            return v[0];
        }
        
    }
};


