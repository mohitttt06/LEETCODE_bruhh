class Solution {
public:
    int maxFreqSum(string s) {


        map <char,int> mp;

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

        int ans1=0;
        int ans2=0;

        for(auto it:mp)
        {
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u')
            {
                 ans1=max(ans1,it.second);
            }
            else
            {
                ans2=max(ans2,it.second);
            }
        }

        int ans = ans1+ans2;

        return ans;
        
    }
};
