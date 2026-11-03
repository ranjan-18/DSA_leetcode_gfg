class Solution {
public:
    int minMoves(vector<int>& nums) {
    int n=nums.size();
    int ans=0;
    sort(nums.begin(),nums.end());
    int target=nums[n-1];
    for(int i=0;i<n-1;i++)
    {
        ans+=abs(nums[i]-target);
    } 
    return ans;   
    }
};