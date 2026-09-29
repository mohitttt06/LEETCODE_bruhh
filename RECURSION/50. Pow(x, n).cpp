class Solution {
public:
    double myPow(double x, int n) {

        

        if(n<0)
        {
            x=1/x;
            
        }
        return opPow(x,n);
   
    }



public:
    double opPow(double x, int n)
    {
        if(n==0) return 1;

        double v = opPow(x,n/2);
        if(n%2==0)
        {
            return v*v;
        }
        else
        {
            return v*v*x;
        }
    }
};
