class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
        TreeSet<Integer> hs = new TreeSet<>();
        for(int i:nums)
        {
            hs.add(i);
        }
        int ind=0;
        for(int i:hs)
        {
            nums[ind++]=i;
        }
        return ind;
    }
}