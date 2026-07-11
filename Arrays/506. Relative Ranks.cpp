class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        
        vector v (score.begin(),score.end());
        sort(v.begin(),v.end(),greater<int>());

        map <int,int> mp;
        
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]=i;
        }

        vector <int> ans;


        for(int i=0;i<score.size();i++)
        {
            ans.push_back(mp[score[i]]);
        }

        vector <string> final;

        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==0)
            {
                final.push_back("Gold Medal");
            }
            else if(ans[i]==1)
            {
                final.push_back("Silver Medal");
            }
            else if(ans[i]==2)
            {
                final.push_back("Bronze Medal");
            }
            else
            {
                final.push_back(to_string(ans[i]+1));
            }

        
        }

        

        return final;
        
    }
};
