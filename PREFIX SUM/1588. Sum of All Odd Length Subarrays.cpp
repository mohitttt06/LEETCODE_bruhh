class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        if(arr.size()==2)
        {
            return arr[0]+arr[1];
        }


       int l=0;
       int r=3;

       vector <int> pf;
       int sum=0;
       

       while(l<arr.size())
       {
        
        if(r>arr.size())
        {
            l++;
            r=l+3;
            continue;
        }

        sum=0;
        
        for(int i=l;i<r;i++)
        {

            sum=sum+arr[i];

        }

        pf.push_back(sum);

        r=r+2;
       }
       
       int result=0;

       for(int i=0;i<arr.size();i++)
       {
        result=result+arr[i];
       }

       for(int i=0;i<pf.size();i++)
       {
        result=result+pf[i];
          
       }

       return result;
        
        
    }
};
