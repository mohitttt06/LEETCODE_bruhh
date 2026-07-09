class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector <int> v;

        for(int i=0;i<heights.size();i++)
        {
            v.push_back(heights[i]);
        }

        sort(v.begin(),v.end());

        int sum=0;

        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=v[i])
            {
                sum=sum+1;
            }
        }

        return sum;

        
    }
};
