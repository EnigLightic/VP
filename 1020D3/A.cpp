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
    int n;
    string s;
    cin>>n>>s;
    int n0=0,n1=0;
    for(auto ch:s) if(ch=='1') n1++;
    else n0++;
    int ans=0;
    ans=n1*(n1-1)+n0*(n1+1);
    cout<<ans<<endl;
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
