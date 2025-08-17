#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<vector>
#include<stack>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<unordered_map>
#include<unordered_set>
#include<set>

#define endl '\n'
#define x first
#define y second
#define MOD 1000000007
#define MAXN 200005

using namespace std;

typedef long long ll;

int a[505][505];
int ans[1010];

void solve(){
    memset(a,0,sizeof(a));
    memset(ans,0,sizeof(ans));
    int n;
    cin>>n;ll res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            ans[i-j+n]=min(ans[i-j+n],a[i][j]);
        }
    }
    for(int i=1;i<=2*n+1;i++){
        res-=ans[i];
    }
    cout<<res<<endl;
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
