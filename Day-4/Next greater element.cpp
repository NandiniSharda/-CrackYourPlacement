class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        // used stack to find the next greatest element
        // used hash table to keep track of next greater element of an element 
        int n=nums1.size();
        int m=nums2.size();
        stack<int> s;
        unordered_map<int,int> greatelement;
        vector<int> ans;
        for(int i=m-1;i>=0;i--)
        {
            if(!s.empty() && nums2[i]>=s.top())
            {
                s.pop();
            }
            greatelement[nums2[i]]= s.empty()?-1:s.top();
            s.push(nums2[i]);
        }
        for(int i=0;i<n;i++)
        {
            ans.push_back(greatelement[nums1[i]]);
        }
        return ans;
    }
};