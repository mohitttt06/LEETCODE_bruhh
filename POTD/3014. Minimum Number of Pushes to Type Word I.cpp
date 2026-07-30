class Solution {
public:
    int minimumPushes(string word) {

        int n = word.size();
        int sum=8;

        if(n<=8) return n;

        int k=n-8;

        if(k<=8)
        {

            for(int i=0;i<k;i++)
            {
                sum=sum+2;
            }

        }
        else if(k>8)
        {
            int c=2;
            for(int i=1;i<=k;i++)
            {
                if(i>8&&(i-1)%8==0)
                {
                    c=c+1;
                }
                sum=sum+c;
                
                

            }
        }

        return sum;

        
    }
};
