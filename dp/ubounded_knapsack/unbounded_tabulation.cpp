#include"bits/stdc++.h"
using namespace std;

int solve(vector<int>wt, vector<int>profit, int n, int w)
{
    int dp[w+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=w;i++){
        for(int j=0;j<n;j++){


            if(wt[j]<=i){
                dp[i] = max(profit[j] + dp[i-wt[j]], dp[i]);
            }
        }
    }
    return dp[w];

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

