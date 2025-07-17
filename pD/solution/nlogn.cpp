#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,q,t;
	cin>>n>>q;
	vector<int> ans(n+1,0);
	for(int i=3;i<=n;i++){
		for(int j=i;j<=n;j+=i){
			ans[j]++;
		}
	}
	while(q--){
		cin>>t;
		cout<<ans[t]+((t&1)^1)+1<<'\n';
	}
	return 0;
}
