class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {


        vector <int> less;
        vector <int> equal;
        vector <int> great;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot) less.push_back(nums[i]);
            else if(nums[i]>pivot) great.push_back(nums[i]);
            else if(nums[i]==pivot) equal.push_back(nums[i]);

        }


        vector <int> result;

        result.insert(result.end(),less.begin(),less.end());
        result.insert(result.end(),equal.begin(),equal.end());
        result.insert(result.end(),great.begin(),great.end());

        return result;



        
    }
};
