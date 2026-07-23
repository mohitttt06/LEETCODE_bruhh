class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

       
        

        int l=0;
        int r=k-1;
        double ans;

        map <double,double> mp;
        vector <double> v;
        v.push_back(nums[0]);
        double a=0;

        for(int i=1;i<nums.size();i++)
        {
            a=nums[i]+v[i-1];
            v.push_back(a);
        }

        for(int i=0;i<v.size();i++)
        {
            mp[i]=v[i];
        }




        double avg;
        ans = v[k - 1] / k;

       

        
        while(r<nums.size())
        {
            
            
           
           
           if(l==0)
           {
              avg = mp[r] / k;
           }
           else
           {
             avg = (mp[r] - mp[l-1]) / k;
           }
           
            
            
            
            if(avg>ans)
            {
                
                ans=avg;


            }
           
            l++;
            r++;
            
        }
        return ans;
    }
};
