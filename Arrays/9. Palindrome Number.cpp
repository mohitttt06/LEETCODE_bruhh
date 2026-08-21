class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        long long int og=x;

        long long int num=0;

        while(x!=0)
        {
            long long int k=x%10;
            num=num*10+k;
            x=x/10;


        }
        if(num==og) return true;
        else
        {
            return false;
        }

        
        
    }
};
