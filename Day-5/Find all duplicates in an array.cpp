class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int> table;
        vector<int> ans;
        for(int i:nums)
        {
            table[i]++;
        }
        for(auto i:table)
        {
            if(i.second==2)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};