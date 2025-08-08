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
using namespace std;

typedef long long ll;


void solve(){
    int n,x;
    cin>>n>>x;
    //int k=0;
    for(int i=0;i<n;i++){ if(i==x) continue;cout<<i<<' ';}
    if(x<n) cout<<x<<endl;
    else cout<<endl;
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
