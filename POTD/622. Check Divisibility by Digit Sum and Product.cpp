class Solution {
public:
    bool checkDivisibility(int n) {

        int og=n;
        int k;
        int s=0;
        int p=1;
        int ans;

        while(n!=0)
        {
            k=n%10;
            s=s+k;
            p=p*k;
            n=n/10;
        }

        ans = s+p;

        if(og%ans==0)return true;
        else
        {
            return false;

        } 

        
    }
};
