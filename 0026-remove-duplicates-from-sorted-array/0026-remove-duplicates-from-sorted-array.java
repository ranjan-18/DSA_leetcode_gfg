class Solution {
    public int removeDuplicates(int[] nums) {
    int n=nums.length;

    int ind=0;
    for(int i=0;i<n;i++)
    {
        boolean duplicate=false;
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                duplicate=true;
                break;
            }
        }

        if(!duplicate)
        {
            nums[ind++]=nums[i];
        }
    }  
    return ind;  
    }
}