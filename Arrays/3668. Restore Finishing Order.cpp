class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        vector <int> result;

        map <int,int> mp;

        for(int i=0;i<order.size();i++)
        {

            mp[order[i]]++;

        } 

        for(int i=0;i<friends.size();i++)
        {
            mp[friends[i]]++;
        }      

        for(int i=0;i<order.size();i++)
        {
            if(mp[order[i]]>=2)
            {
                result.push_back(order[i]);

            }
        }

        return result;
    }
};
