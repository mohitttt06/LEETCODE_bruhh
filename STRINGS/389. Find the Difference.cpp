class Solution {
public:
    char findTheDifference(string s, string t) {


        string q = s+t;


        map <char,int> mp1;

        for(int i=0;i<q.size();i++)
        {
            mp1[q[i]]++;
        }
 

        char ans;

        for(auto it:mp1)
        {
            if(it.second%2!=0)
            {
                ans = it.first;
                break;
            }
        }

        return ans;
    }
};
