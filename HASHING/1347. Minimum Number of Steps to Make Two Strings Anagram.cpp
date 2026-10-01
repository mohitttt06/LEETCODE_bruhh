class Solution {
public:
    int minSteps(string s, string t) {

        map <char,int> mp1;
        

        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
        }

        

        int c=0;
        
        for(int i=0;i<t.size();i++)
        {
            if(mp1[t[i]]==0)
            {

                c++;
                

            }
            else
            {
                mp1[t[i]]--;

            }

            
        }

        return c;


    }
};
