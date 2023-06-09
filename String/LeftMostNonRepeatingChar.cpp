#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int NONRepeatingChar(string &st) {
    bool visited[CHAR] = {-1};
    int res = -1;
    for(int i=0;i<st.size();i++) {
        if(visited[st[i]]==-1)
            visited[st[i]] = i;
        else
            visited[st[i]] = -2;
    }
    for(int i=0;i<st.size();i++){
        if(visited[st[i]]>=0)
            return i;
    }
    return -1;

}

int main(){

    string st;
    getline(cin, st);

    int ans = NONRepeatingChar(st);
    cout<<ans<<endl;



}

