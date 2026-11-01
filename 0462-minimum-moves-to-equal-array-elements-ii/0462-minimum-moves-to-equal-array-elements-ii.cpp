class Solution {
public:
    int minMoves2(vector<int>& nums) {
      int n=nums.size();
    sort(nums.begin(),nums.end());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=i;
    }
    

            int target= nums[n /2];
    int moves=0;
    for(int i=0;i<n;i++)
    {
        moves+=abs(nums[i]-target);
    } 
    return moves;  
    }
};