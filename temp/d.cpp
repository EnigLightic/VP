#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<vector>
#include<stack>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<unordered_map>
#include<unordered_set>
#include<set>
using namespace std;

typedef long long ll;

const int N=2e5+5;
vector<int>used;
vector<int>E[N];
vector<pair<int,int>>ans;

void dfs(int u,bool in){
    used[u]=1;
    for(int v:E[u]){
        if(!used[v]) {
            dfs(v,!in);
            if(in) ans.emplace_back(v,u);
            else ans.emplace_back(u,v);
        }
    }
}

void solve(){
   int n;
    cin>>n;
    ans.clear();
    used.clear();
    for(int i=0;i<n;i++) E[i].clear();
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        E[u].push_back(v);
        E[v].push_back(u);
    }
    int x=0;
    while(x<n&&E[x].size()!=2) x++;
    if(x>=n) {cout<<"NO\n";return ;}
    used.assign(n,0);
    used[x]=1;
    cout<<"YES\n";
    ans.emplace_back(x,E[x][0]);
    ans.emplace_back(E[x][1],x);
    dfs(E[x][0],true);
    dfs(E[x][1],false);
    sort(ans.begin(),ans.end());
    for(auto [u,v]:ans){
        cout<<u+1<<' '<<v+1<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T=1;
    cin>>T;
    while(T--)
	solve();
    return 0;
}
