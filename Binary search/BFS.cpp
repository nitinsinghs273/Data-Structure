#include<bits/stdc++.h>

using namespace std;
const int N = 1e6+10;
vector<int>graph[N];
static void printGraph(int n)
{

    for (int i = 0; i <n; i++)
    {
        cout << i << " : ";
        for (auto nbr: graph[i])
        {
            cout << nbr << " ";
        }
        cout << endl;
    }
}

int visited[N];
vector<int>bfs; // this contain the Bfs traversal order
int level[N];

void BFS(int source){
    queue<int>q;
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int curr_v = q.front();
        q.pop();

        bfs.push_back(curr_v);
        for(auto Child: graph[curr_v]){
            if(!visited[Child]){
                visited[Child]=1;
                q.push(Child);
                level[Child] = level[curr_v]+1;
            }
        }

    }

}

int main(){

    int n;
    cin>>n;//no of edges in the given input
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    BFS(1);

    for(int i=1;i<n;i++){
        cout<<level[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<bfs.size();i++){
        cout<<bfs[i]<<" ";
    }





}
/*input:

6
1 2
1 4
1 5
2 3
2 5
3 5
*/
