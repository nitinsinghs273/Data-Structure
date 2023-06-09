#include"bits/stdc++.h"
using namespace std;
int dp[101][101];
int solve(vector<int>&ans,int index, int n)
{
    if(n==0)return 0;
    if(index==0)return ans[index];
    if(dp[n][index] != -1)return dp[n][index];
    int taken = ans[index]+solve(ans,index-2,n-2);
    int nottaken = solve(ans, index-1,n-1);
    return dp[n][index] = max(taken,nottaken);
}

int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
    }
    memset(dp,-1,sizeof(dp));
    int maximum_amount = solve(ans,ans.size()-1,ans.size());
    cout<<maximum_amount<<endl;

}
