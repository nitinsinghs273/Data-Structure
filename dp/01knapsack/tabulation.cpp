#include"bits/stdc++.h"
using namespace std;

int solve(vector<int>wt, vector<int>profit, int n, int w)
{
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(wt[i-1] > j)
                dp[i][j] = dp[i-1][j];//capacity remain same but element is excluded
            else{
                dp[i][j] = max(profit[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
            }
        }
    }
    return dp[n][w];

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


    int max_profit = solve(weight, profit, n, capacity);
    cout<< max_profit <<endl;
}

