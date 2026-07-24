class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int l=0;
        int r=2;

        int c=0;

        while(l<colors.size())
        {
            int u=l+1;
             

        if (u == colors.size())
         {
            u = 0;
         }

        if (r >= colors.size())
        {
          r = r % colors.size();
        }
            
            if(colors[u]!=colors[l]&&colors[u]!=colors[r])
            {
                c++;
            }
           
            l++;
            r++;
        }

        return c;
        
    }
};
