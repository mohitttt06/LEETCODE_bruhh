class Solution {
public:
    int firstUniqChar(string s) {


        map<int,int> mp;

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

        int ans=-1;

        for(int i=0;i<s.size();i++)
        {

            if(mp[s[i]]==1)
            {
                ans=i;
                break;

            }
           

        }

        return ans;






        
    }
};
