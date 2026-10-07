class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {


        int l=0;
        int r=0;

        int sum=0;
        int avg;
        int ans=0;

        while(r<k)
        {
            sum=sum+arr[r];
            r++;
        }
        r--;

        while(r<arr.size())
        {
            if((r-l)+1==k)
            {
                
                
                
                avg=sum/k;
                if(avg>=threshold)
                {
                    ans++;
                }

                l++;
                r++;

                if(r<arr.size())
                {
                    sum=sum-arr[l-1]+arr[r];
                }


            }
            
            

        }

        return ans;
        
    }
};
