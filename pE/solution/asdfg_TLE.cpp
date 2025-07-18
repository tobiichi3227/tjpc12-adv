#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()

void solve(){//sub 1 solution
    int n,k;
    cin>>n>>k;
    if(n>15)while(1);
    vector<int>T(n),H(n),B(n);
    for(int i=0;i<n;i++){
        cin>>T[i]>>H[i]>>B[i];
    }
    int ans=0;
    for(int i=0;i<(1<<n);i++){
        int now=k,cut=0;
        bool f=1;
        for(int j=0;j<n;j++){
            if((1<<j)&i)cut+=H[j],now=now+T[j]*17-B[j];
            else now+=H[j]*17;
            if(now<=0){
                if((int)log2(i)!=j)f=0;
                break;
            }
        }
        if(f)ans=max(ans,cut);
    }
    cout<<ans<<'\n';
}

signed main(){
    cin.sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
