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

#define endl '\n'
#define x first
#define y second
#define MOD 1000000007
#define MAXN 200005

using namespace std;

typedef long long ll;


void solve(){
    int n;
    cin>>n;
    if(n&1) cout<<"Kosuke\n";
    else cout<<"Sakurako\n";
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
