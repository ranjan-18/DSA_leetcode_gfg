class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
    int n=nums.size();
    int maxlen=0,l=0,r=0;
    unordered_map<int,int>mp;
    for(int r=0;r<n;r++)
    {
        mp[nums[r]]++;
       
    if(mp[nums[r]]>k)
    {
        while(nums[l]!=nums[r])
        {
            mp[nums[l]]--;
            l++;
        }
        mp[nums[l]]--;
        l++;
    }
    maxlen=max(maxlen,r-l+1);
    }
    return maxlen;
    }
};