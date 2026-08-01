class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {


        int l=0;
        int r=numbers.size()-1;

        

        while(l<r)
        {
            if(numbers[l]+numbers[r]==target)
            {
                numbers.push_back(l+1);
                numbers.push_back(r+1);

                break;

            }
            else if(numbers[l]+numbers[r]>target)
            {
                r--;
            }
            else if(numbers[l]+numbers[r]<target)
            {
                l++;
            }
        }

        numbers.erase(numbers.begin(),numbers.end()-2);
        return numbers;
    }
};
