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


void solve(){
    int n;
    cin>>n;n-=2;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n<=2){cout<<"Yes\n";return;}
    for(int i=0;i<n-2;i++){
        if(a[i]==1&&a[i+1]==0&&a[i+2]==1) {cout<<"No\n";return ;}
    }cout<<"Yes\n";
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
