#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int LeftMostRepeatingChar(string &st) {
    bool visited[CHAR] = {false};
    int res = -1;
    for(int i=st.size()-1;i>=0;i--) {
        if(visited[st[i]])
            res = i;
        else
            visited[st[i]] = true;
    }
    return res;

}

int main(){

    string st;
    getline(cin, st);

    int ans = LeftMostRepeatingChar(st);
    cout<<ans<<endl;



}
