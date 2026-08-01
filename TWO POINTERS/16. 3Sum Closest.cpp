class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        if(nums.size()==3) 
        {
            int sum = nums[0]+nums[1]+nums[2];
            return sum;
        }


        


        int l=0;
        int m=1;
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        
        vector <int> v;
        int sum;


        while(l<nums.size()-2)
        {
            

            if(m>=n)
            {

                l++;
                if(l>=nums.size()-2)
                {
                    break;
                }
                m=l+1;
                n=nums.size()-1;
                
                
            }
            else if(nums[l]+nums[m]+nums[n]<target)
            {
                sum=nums[l]+nums[m]+nums[n];
                m++;
            }
            else if(nums[l]+nums[m]+nums[n]>target)
            {
                sum=nums[l]+nums[m]+nums[n];
                n--;
            }
            else
            {
                v.push_back(nums[l]+nums[m]+nums[n]);
                break;
            }

            
            v.push_back(sum);
        }

        
        

        
            
        int ans;
        int min;

        int x=v.size();


        vector <int> w(x);

        for(int i=0;i<v.size();i++)
        {
            w[i]=abs(v[i]-target);
        }

        int mn=*min_element(w.begin(),w.end());


        for(int i=0;i<v.size();i++)
        {
            if(abs(v[i]-target)==mn)
            {
                ans=v[i];
                break;
            }
        }
        return ans;

    }
};
