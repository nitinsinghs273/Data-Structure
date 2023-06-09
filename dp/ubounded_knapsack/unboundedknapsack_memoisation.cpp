#include"bits/stdc++.h"
using namespace std;
int dp[1000][1000];
int solve(vector<int>wt, vector<int>profit, int n, int w)
{
    if(n==0||w==0)return 0;
    if(dp[n][w] != -1)return dp[n][w];
    if(wt[n-1]>w)
        return dp[n][w] = solve(wt, profit, n-1, w);

    int taken = profit[n-1]+solve(wt, profit, n, w-wt[n-1]);
    int nottaken = solve(wt, profit, n-1, w);
    return dp[n][w] = max(taken, nottaken);
}

int main()
{
    int n;
    cin>>n;
    vector< int >weight(n);
    vector< int >profit(n);
    for(int i=0;i<n;i++)
    {
        cin >> weight[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>profit[i];
    }
    int capacity;
    cin >> capacity;

   memset(dp,-1,sizeof(dp));
    int max_profit = solve(weight, profit, n, capacity);
    cout<< max_profit <<endl;
}

