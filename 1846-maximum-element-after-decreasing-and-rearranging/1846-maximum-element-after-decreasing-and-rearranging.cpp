class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
    int n=arr.size();
    int cnt=1,maxi=1;
    sort(arr.begin(),arr.end());
    arr[0]=1;
    if(n==1)
    return 1;
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-arr[i-1])>1)
        {
            cnt++;
            arr[i]=cnt;
        }
        else
        {
            cnt=arr[i];
        }
        maxi=max(cnt,arr[i]);
    }   
    return maxi; 
    }
};