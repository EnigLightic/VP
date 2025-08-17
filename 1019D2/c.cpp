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
const int MAXN=2e5+5;
int k,n,arr[MAXN],suf[MAXN],minsuf[MAXN];

bool cpremid(){
    suf[n]=minsuf[n]=arr[n];
    for(int i=n-1;i>=1;i--){
        suf[i]=suf[i+1]+arr[i];
        minsuf[i]=min(minsuf[i+1],suf[i]);
    }
    int s=0;
    for(int i=1;i+2<=n;i++){
       s+=arr[i];
        if(s<0) continue;
        if(suf[i+1]>=minsuf[i+2]) return true;
    }
    return false;
}

void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=1;i<=n;i++)
        if(arr[i]<=k) arr[i]=1;
        else arr[i]=-1;
    int a=n+1,b=-1;
    int s=0;
    for(int i=1;i<=n;i++){
        s+=arr[i];
        if(s>=0) {a=i;break;}
    }
    s=0;
    for(int i=n;i>=1;i--){
        s+=arr[i];
        if(s>=0) {b=i;break;}
    }
    if(a+1<b){cout<<"YES\n";return ;}
    if(cpremid()) {cout<<"YES\n";return ;}
    for(int i=1;i<n-i+1;i++) swap(arr[i],arr[n-i+1]);
    if(cpremid()) {cout<<"YES\n";return ;}
    cout<<"NO\n";
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
