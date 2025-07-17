#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,q,tem,ans;
    cin>>n>>q;
    while(q--){
        cin>>tem;
        ans=0;
    		for(int j=1;j*j<=tem;j++){
    			if(j*j==tem) ans++;
    			else if(tem%j==0) ans+=2;
    		}
    		cout<<ans<<'\n';
    }
}
