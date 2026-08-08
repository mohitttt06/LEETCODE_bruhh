class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

        string ans;
        int p = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(p < spaces.size() && i == spaces[p])
            {
                ans += ' ';
                p++;
            }

            ans += s[i];
        }

        return ans;
    }
};
