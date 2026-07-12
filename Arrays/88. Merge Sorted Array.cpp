class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {


       int s=nums1.size();
       for(int i=m;i<s;i++)
       {
        nums1.pop_back();
       }

       for(int i=0;i<nums2.size();i++)
       {
        nums1.push_back(nums2[i]);
       }

       sort(nums1.begin(),nums1.end());
    }
};
