class Solution {
public:
    string frequencySort(string s) {


        map <char,int> mp;

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

        vector <int> v;

        for(auto it:mp)
        {
            v.push_back(it.second);
        }

        sort(v.begin(),v.end(),greater<int>());

        string n;

        for(int i=0;i<v.size();i++)
        {
            for(auto &it:mp)
            {
                if(v[i]==it.second)
                {
                    int l = v[i];
                    while(l--)
                    {
                        n.push_back(it.first);

                    }

                    it.second=-1;
                    

                }
                
                
                
            }
            
        }

        return n;


        
    }
};
