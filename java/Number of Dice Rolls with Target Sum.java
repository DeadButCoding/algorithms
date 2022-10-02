class Solution {
    public int numRollsToTarget(int n, int k, int target) {
        Integer[][] dp=new Integer[n+1][target+1];
        return helper(n,k,target,dp);
    }
    public int helper(int n,int k,int target,Integer[][] dp){
        if(n<0 || target<0){
            return 0;
        }
        if(n==0 && target==0){
            return 1;
        }
        if(dp[n][target]!=null){
            return dp[n][target];
        }
        int ans=0;
        for(int i=1;i<=k;i++){
            if(i>target){
                break;
            }
            ans=(ans+helper(n-1,k,target-i,dp))%((int)1e9+7);
        }
        return dp[n][target]=ans;
    }
}