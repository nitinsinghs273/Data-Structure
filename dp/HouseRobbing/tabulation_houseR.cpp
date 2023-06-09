#include"bits/stdc++.h"
using namespace std;

int solve(vector<int>&ans, int n)
{

    int dp[n+1];
    dp[0]=0;
    dp[1]=ans[0];
    for(int i=2;i<=n;i++){
        dp[i] = max(ans[i-1]+dp[i-2],dp[i-1]);
    }
    return dp[n];



}

int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
    }

    int maximum_amount = solve(ans,ans.size());
    cout<<maximum_amount<<endl;

}

