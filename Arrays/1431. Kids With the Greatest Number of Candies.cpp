class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector <int> v(candies.begin(),candies.end());
        sort(v.begin(),v.end(),greater<int>());
        int max=v[0];

        vector <bool> ans;

        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }

        return ans;
        
    }
};
