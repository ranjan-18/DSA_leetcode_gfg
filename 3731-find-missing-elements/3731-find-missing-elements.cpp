class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans;
    sort(nums.begin(),nums.end());
    int mini=nums[0],maxi=nums[n-1];
    for(int i=mini;i<maxi;i++)
    {
        if(find(nums.begin(),nums.end(),i)==nums.end())
        ans.push_back(i);
    }
    return ans;   
    }
};