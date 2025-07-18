#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")

int read() {
	int x=0,y=0;char c=0;
	while(!isdigit(c))y|=c=='-',c=getchar();
	while(isdigit(c))x=(x<<3)+(x<<1)+(c^48),c=getchar();
	return y?-x:x;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n=0,q=0,t;
	char c;
	c='0';
	while(c<='9'&&c>='0')
	{
		n=((n<<3)+(n<<1))+(c-'0');
		c=getchar_unlocked();
	}
	c='0';
	while(c<='9'&&c>='0')
	{
		q=((q<<3)+(q<<1))+(c-'0');
		c=getchar_unlocked();
	}
	vector<int> ans(n+1,0);
	for(int i=3;i<=n;i++){
		for(int j=i;j<=n;j+=i){
			ans[j]++;
		}
	}
	while(q--){
		c='0';
		t=0;
		while(c<='9'&&c>='0')
		{
			t=((t<<3)+(t<<1))+(c-'0');
			c=getchar_unlocked();
		}
		cout<<ans[t]+((t&1)^1)+1<<'\n';
	}
	return 0;
}
