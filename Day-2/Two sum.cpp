class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> map;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int req=target-nums[i];
            if(map.count(req))
            {
                // cout<<i<<map[req];
                return {map[req],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};