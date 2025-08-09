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
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    int mn=INT_MAX,mx=-1;
    for(int i=0;i<n;i++) cin>>a[i];
    int sum=-1,flag=0,all=0;//int xnum=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(a[i]!=-1&&b[i]!=-1){
            if(a[i]+b[i]>k) flag=-1;
            if(sum==-1) sum=a[i]+b[i];
            else if(sum!=a[i]+b[i]) flag=-1;
            all=1;
        }
        //if(~b[i]) xnum++;
        mn=min(mn,a[i]),mx=max(mx,a[i]);
     //   if(a[i]==-1&&b[i]==-1) bot++;
    }
    //if(n==5&&k==4) cout<<"***"<<sum<<endl;
    if(flag==-1){cout<<0<<endl;return ;}
    if(sum!=-1) for(int i=0;i<n;i++) if(a[i]>sum||a[i]+b[i]>sum) {cout<<"0\n";return ;}
    if(all==1) {cout<<"1\n";return ;}
    cout<<mn+k-mx+1<<endl;
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
