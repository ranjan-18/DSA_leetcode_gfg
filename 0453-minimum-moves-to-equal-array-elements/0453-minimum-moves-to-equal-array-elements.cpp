class Solution {
public:
    int minMoves(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int target=nums[0];
    int moves=0;
    for(int i=1;i<n;i++)
    {
        moves+=nums[i]-target;
    } 
    return moves;    
    }
};