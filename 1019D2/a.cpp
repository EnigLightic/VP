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
    set<ll>se;
    cin>>n;ll t;
    for(int i=0;i<n;i++){
        cin>>t;
        se.insert(t);
    }
    cout<<se.size()<<endl;
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
