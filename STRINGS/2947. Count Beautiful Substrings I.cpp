class Solution {
public:
    int beautifulSubstrings(string s, int k) {

        int l=0;
        int r=0;

        
        int ans=0;
       

        while(l<s.size())
        {
             int v=0;
            int c=0;


            while(r<s.size())
            {
                if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u')
                {
                    v++;

                }
                else
                {
                    c++;
                }
            

            if(v==c&&(v*c)%k==0)
            {
                ans++;
            }
            r++;

            }
            l++;
            r=l;

            
        
            
            
           


                
                
                
            
        }

        return ans;
        
    }


    
};
