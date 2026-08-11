class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {


        vector <int> ans;
        int n=nums.size();
        

        if(n==1) 
        {
            ans.push_back(0);
            return ans;

        }



        vector <int> left(n);
        left[0]=0;

        for(int i=1;i<n;i++)
        {
            left[i]=left[i-1]+nums[i-1];
        }


        vector <int> right(n);
        right[n-1]=0;

        

        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]+nums[i+1];
        }

        

        for(int i=0;i<n;i++)
        {
            int b=abs(left[i]-right[i]);
            ans.push_back(b);
        }


        return ans;
    }
};
