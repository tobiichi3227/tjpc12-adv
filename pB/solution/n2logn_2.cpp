// n^2logn, using merge+brute
#include<bits/stdc++.h>
using namespace std;

vector<int> v,v2;
long long ans=0;

void merge(vector<int>::iterator b,vector<int>::iterator e){
	if(e-b<=1) return;
	vector<int> vv;
	vv.resize(e-b);
	auto mid=b+(e-b+1)/2;
	merge(b,mid);
	merge(mid,e);
	auto li=b,ri=mid;
	int ind=0;
	for(;ri<e;ri++){
		while(li<mid&&*li<=*ri){
			vv[ind]=*li;
			li++,ind++;
		}
		ans+=mid-li;
		vv[ind]=*ri;
		ind++;
	}
	while(li<mid){
		vv[ind]=*li;
		li++,ind++;
	}
	for(auto i=b;i<e;i++) *i=vv[i-b];
	return;
}

long long check(int n){
    v2=v;
    ans=0;
    sort(v2.begin()+n,v2.end());
    merge(v2.begin(),v2.end());
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long x;
    cin>>n>>x;
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=n;i>=0;i--){
        if(check(i)<=x){
            cout<<i<<'\n';
            break;
        }
    }
    return 0;
}