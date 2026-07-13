class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

    

        map<int,int>mp;

        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }

       

        vector <int> v;

        for(auto it: mp)
        {
            
            v.push_back(it.second);
        }

        set <int> s(v.begin(),v.end());

        if(s.size()!=v.size()) return false;
        else return true;

       




        
    }
};
