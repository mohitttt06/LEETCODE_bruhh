class Solution {
public:
    string reversePrefix(string s, int k) {

        int l=0;
        int r=k-1;
        

        while(l<r)
            {
                if(l==r) break;
                char temp=s[l];
                s[l]=s[r];
                s[r]=temp;

                l++;
                r--;
            
            }
        return s;
    }
};
