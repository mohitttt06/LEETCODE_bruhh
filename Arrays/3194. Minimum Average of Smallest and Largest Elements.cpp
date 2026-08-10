class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        vector <double> v;

        int n=nums.size()/2;


        for(int i=0;i<n;i++)
        {
            int mn = *min_element(nums.begin(),nums.end());
            int mx = *max_element(nums.begin(),nums.end());

            double avg = (mn+mx)/2.0;

            v.push_back(avg);

            nums.erase(find(nums.begin(),nums.end(),mn));
            nums.erase(find(nums.begin(),nums.end(),mx));

        }
        sort(v.begin(),v.end());

        return v[0];




    }
};
