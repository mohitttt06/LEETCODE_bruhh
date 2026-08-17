class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        map <char,int> mp;

        for(int i=0;i<stones.size();i++)
        {
            mp[stones[i]]++;
        }
        int ans=0;

        for(int i=0;i<jewels.size();i++)
        {
            for(auto it:mp)
            {
                if(jewels[i]==it.first)
                {
                    ans=ans+it.second;
                }
            }
        }

        return ans;
        
    }
};
