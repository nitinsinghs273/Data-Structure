#include "bits/stdc++.h"
using namespace std;
#define mod 1e9 + 7
#define INF 1000000000000000003
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define ENDL "\n"

const int N = 1e6+10;

int n;
long long m;
long long tree[N];

bool iswoodSufficient(int h){
	long long wood = 0;
	for(int i=0;i<n;i++)
	{
		if(tree[i] >= h)
			wood += (tree[i]-h);
	}
	return wood >= m;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
    	cin>>tree[i];
    }

    long long low = 0, high = 1e9, mid;

    while(high - low > 1){
    	mid = (low + high)/2;
    	//T T T T F F F F
    	if(iswoodSufficient(mid)){
    		low = mid;
    	}
    	else
    		high = mid - 1;
    }
    if(iswoodSufficient(high))
    	cout<<high<<endl;
    else
    	cout<<low<<endl;


}
