class Solution {
public:
    int minLength(string s) {

        int l=0;
        int r=1;

        while(l<r&&r<s.size())
        {
            if(l>r||r>=s.size()) break;
            if((s[l]=='A'&&s[r]=='B')||(s[l]=='C'&&s[r]=='D'))
            {
                s.erase(r,1);
                s.erase(l,1);
                l=0;
                r=1;
            }

            else
            {

            l++;
            r++;

            }
            
           
        }


        int ans = s.size();

        return ans;
        
    }
};
