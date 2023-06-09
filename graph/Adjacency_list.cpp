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

vector<vector<int>> build_graph(int v, vector<vector<int>> edges)
{
    vector<vector<int>> graph;
	// entering the specific no. vector which is empty
    for (int i = 0; i <= v; i++)
    {
        vector<int> v;
        graph.push_back(v);
    }
    // now forming the connection between vertices
    for (auto edge: edges)
    {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }
    return graph;
}

static void printGraph(int v, vector<vector<int>> edges)
{
    vector<vector<int>> graph = build_graph(v, edges);
    for (int i = 0; i <= v; i++)
    {
        cout << i << " : ";
        for (auto nbr: graph[i])
        {
            cout << nbr << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int v; //this is no. of vertices
    cin >> v;
    int n; // this is no. of edges
    cin >> n;
    vector<vector<int>> edges;
    for (int i = 1; i <= n; i++)
    {
        vector<int> v;
        int x, y;
        cin >> x >> y;
        v.push_back(x);
        v.push_back(y);
        edges.push_back(v);
    }

    printGraph(v, edges);
}
/*input:
5
6
1 2
1 4
1 5
2 3
2 5
3 5*/
