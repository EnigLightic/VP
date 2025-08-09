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
    cin>>n;
    string s;
    cin>>s;
    int cur='0';
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]!=cur) ans++;
        cur=s[i];
    }
    if(ans>=3) n+=ans-2;
    else if(ans==2) n+=ans-1;
    else n+=ans;
    cout<<n<<endl;
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
