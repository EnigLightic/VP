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
int a[6];

int cal(int x){
    int ans=0;
    a[3]=x;
    for(int i=1;i<=3;i++) if(a[i]+a[i+1]==a[i+2]) ans++;
    return ans;
}

void solve(){
    cin>>a[1]>>a[2]>>a[4]>>a[5];
    int aa=a[1]+a[2],b=a[4]-a[2],c=a[5]-a[4];
    int x=cal(aa),y=cal(b),z=cal(c);
    int ans=max(max(x,y),z);
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
