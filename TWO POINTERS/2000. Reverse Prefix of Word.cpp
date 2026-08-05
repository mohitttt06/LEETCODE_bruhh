class Solution {
public:
    string reversePrefix(string word, char ch) {

        int l=0;;
        int r;

        int d=-1;

        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch) 
            {
                d=i;
                break;

            }
        }

        r=d;

        if(r==-1) return word;
 
        while(l<word.size()&&l<r)
        {
            

            if(l==r) break;

            
            char temp = word[r];
            word[r]=word[l];
            word[l]=temp;

            r--;
            l++;


        }
        return word;
    }
};
