class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> table;
        int n=nums.size();
        for(int i:nums)
        {
            table[i]++;
        }
        for(auto x:table)
        {
            if(x.second>n/2)
            {
                return x.first;
            }
        }
        return -1;        
    }
};