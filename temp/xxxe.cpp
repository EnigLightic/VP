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


void solve(){
    int n;
    cin>>n;
    vector<ll>a(n+1),psu(n+1),lst(n+1),dp(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    psu[0]=0;
    map<ll,ll>mp;
    mp[0]=0;psu[0]=0;
    for(int i=1;i<=n;i++){
        psu[i]=psu[i-1]+a[i];
        if(mp.find(psu[i])==mp.end()) lst[i]=-1;
        else lst[i]=mp[psu[i]];
        mp[psu[i]]=i;
    }
    for(int i=1;i<=n;i++){
        dp[i]=max(dp[i],dp[i-1]);
        if(lst[i]!=-1) dp[i]=max(dp[i],dp[lst[i]]+1);
    }
    cout<<*max_element(dp.begin(),dp.end())<<endl;
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
