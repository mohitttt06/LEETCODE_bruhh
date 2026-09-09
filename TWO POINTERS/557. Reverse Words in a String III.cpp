class Solution {
public:
    string reverseWords(string s) {


        int l=0;
        int r=1;

        while(r<s.size())
        {
            if(l>=s.size()) break;

            if(r==s.size()-1)
            {
                
                for(int i=l;i<r;i++)
                {
                    if(l==r) break;
                    char temp = s[l];
                    s[l]=s[r];
                    s[r]=temp;
                    l++;
                    r--;
                }
                break;
            }
            
            
            if(s[r]==' ')
            {
                int q=l;
                int k=r-1;
                for(int i=q;i<k;i++)
                {
                    if(q==k) break;
                    char temp = s[q];
                    s[q]=s[k];
                    s[k]=temp;
                    q++;
                    k--;
                }
                l=r+1;
                r=l;
            }

            r++;
        }


     return s;
        
    }
};
