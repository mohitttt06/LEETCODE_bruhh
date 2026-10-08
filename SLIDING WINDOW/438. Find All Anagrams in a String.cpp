class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int l=0;
        int r=0;
        int k=p.size();
        int c=0;

        map <char,int> mp;

        for(char it:p)
        {
            mp[it]++;
        }
        map <char,int> window;
        vector <int> v;

        while(r<s.size())
        {
            window[s[r]]++;
            if(r-l+1==k)
            {
                if(window==mp)
                {
                    v.push_back(l);
                }
                window[s[l]]--;

                if(window[s[l]] == 0)
                window.erase(s[l]);
                l++;

            }
            
                r++;

            
            
        }

        return v;
        
    }
};
