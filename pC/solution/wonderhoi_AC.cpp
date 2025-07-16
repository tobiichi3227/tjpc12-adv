#include<bits/stdc++.h>
using namespace std;

priority_queue<long long,vector<long long>,greater<long long>> pq;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long s,d,n,x,i,k;
	cin>>s>>d>>n>>x;
	for(i=1;i<=d;i++){
		cin>>k;
		if(s*s>=x){
			cout<<i-1<<'\n';
			break;
		}
		s+=2*k;
		pq.push(k);
		if(pq.size()>n){
			s-=pq.top();
			pq.pop();
		}
	}
	if(i==d+1&&s*s>=x) cout<<d<<'\n';
	else if(s*s<x) cout<<-1<<'\n';
	return 0;
}
