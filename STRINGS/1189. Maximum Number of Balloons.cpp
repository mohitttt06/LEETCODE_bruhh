class Solution {
public:
    int maxNumberOfBalloons(string text) {

        map <char,int> mp = {{'b',0},{'a',0},{'l',0},{'o',0},{'n',0}};

        for(int i=0;i<text.size();i++)
        {
            if(text[i]!='b'&&text[i]!='a'&&text[i]!='l'&&text[i]!='o'&&text[i]!='n')
            {

                text.erase(i,1);

            }
        }

        for(int i=0;i<text.size();i++)
        {
            mp[text[i]]++;
        }

        int ans = min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});

        

        return ans;
        
    }
};
