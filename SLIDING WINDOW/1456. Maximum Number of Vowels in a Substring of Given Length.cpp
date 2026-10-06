class Solution {
public:
    int maxVowels(string s, int k) {

        int l=0;
        int r=0;
        int mx=-1;
        int c=0;
        

        while(r<s.size())
        {
            
            
            if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u')
            {
                c++;
            
            }

            if((r-l+1)==k)
            {
                mx=max(mx,c);
                
                if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')
                {
                    c--;
                }
                

                   l++;
                   
            
            }
              r++;
            
            
        }

        return mx;
        
    }
};
