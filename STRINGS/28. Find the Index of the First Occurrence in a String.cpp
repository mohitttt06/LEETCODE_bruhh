class Solution {
public:
    int strStr(string haystack, string needle) {


        int l=0;
        int m=0;
        int n=0;

        int ans=-1;
        int c=0;

        

        while(l<haystack.size())
        {
            if(haystack[m]==needle[n])
            {
                
                c++;

                
                if(c==needle.size())
                {
                    ans=l;
                    break;

                }

                
                    m++;

                    if(m>=haystack.size()) break;


                
                
                    n++;
                    if(n>=needle.size()) n=0;

                
                
                
                
            }
            else
            {
                
                l++;
                m=l;
                n=0;
                c=0;
            }

            
        }

        if(ans==-1) return -1;

        else return ans;
        
    }
};
