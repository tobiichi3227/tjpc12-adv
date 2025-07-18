#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>T(n),H(n),B(n);
    for(int i=0;i<n;i++){
        cin>>T[i]>>H[i]>>B[i];
    }
    vector<vector<int>>dp(1000+5,vector<int>(1000+5,-1e9));
    dp[0][0]=H[0]*17+k;
    dp[0][H[0]]=k-B[0]+T[0]*17;
    int ans=H[0];
    for(int i=1;i<n;i++){
        for(int j=1000;j>=0;j--){
            if(j>=H[i]&&dp[i-1][j-H[i]]>0)
                dp[i][j]=max(dp[i-1][j-H[i]]-B[i]+T[i]*17,dp[i][j]);
            if(dp[i-1][j]>0) dp[i][j]=max(dp[i][j],dp[i-1][j]+H[i]*17);
            if(dp[i][j]!=-1e9)ans=max(ans,j);
        }
    }
    cout<<ans<<'\n';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<9;j++){
    //         cout<<dp[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }
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
