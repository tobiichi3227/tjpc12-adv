#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, q, t;
	cin>>n>>q;
	vector<int> ans(n+1);
	for(int i=1;i<=n;i++){
		for(int j=1;j*j<=i;j++){
			if(j*j==i) ans[i]++;
			else if(i%j==0) ans[i]+=2;
		}
	}
	while(q--){
		cin>>t;
		cout<<ans[t]<<'\n';
	}
	return 0;
}
