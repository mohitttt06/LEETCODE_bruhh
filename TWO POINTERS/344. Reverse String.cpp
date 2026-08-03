class Solution {
public:
    void reverseString(vector<char>& s) {


        int l=0;
        int r=s.size()-1;


        

        while(l<r)
        {

          

            
           
            char temp = s[r];
            s[r]=s[l];
            s[l]=temp;

          l++;
          r--;
        }

        for(int i=0;i<s.size();i++)
        {
            cout << s[i];
        }
        
    }
};
