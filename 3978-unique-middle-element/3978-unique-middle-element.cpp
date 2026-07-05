class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int,int>mp;
    for(auto it:nums)
    {
        mp[it]++;
    }   
    int mid=nums[n/2];
    for(auto it:mp)
    {
        if(it.first==mid && it.second>1)
        return false;
    }
    return true;
    }
};