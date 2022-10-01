class Solution {
    public int numDecodings(String s) {
        int[][] dp=new int[s.length()+1][3];
        for(int i=0;i<dp.length;i++){
            Arrays.fill(dp[i],-1);
        }
        return num(s,0,0,0,dp);
    }
    public int num(String s,int i,int prev,int a,int[][] dp){
        if(i==s.length()){
            return prev==0?0:1;
        }
        if(s.charAt(i)=='0' && prev==0){
            return 0;
        }
        if(dp[i][prev]!=-1){
            return dp[i][prev];
        }
        int curr=s.charAt(i)-'0';
        a=a*10+curr;
        if(a>26){
            return 0;
        }
        int take=num(s,i+1,0,0,dp);
        int notTake=num(s,i+1,prev+1,a,dp);
        return dp[i][prev]=take+notTake;
    }
}