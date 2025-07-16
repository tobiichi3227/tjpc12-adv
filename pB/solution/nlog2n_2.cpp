// nlog^2n, using binary search+bit
#include<bits/stdc++.h>
using namespace std;

vector<int> v,v2;
int n;

struct BIT{
    vector<int> bit;
    BIT(int t){
        bit.resize(t+1,0);
    }
    long long query(int p){
        long long ans = 0;
        for(int i=p-1;i>0;i-=(i&(-i))) ans+=bit[i];
        for(int i=p;i<=n;i+=(i&(-i))) bit[i]++;
        return ans;
    }
};

long long check(int t, BIT& bit){
    v2=v;
    long long ans=0;
    sort(v2.begin()+t,v2.end());
    bit.bit.assign(n+1,0);
    for(int i=n-1;i>=0;i--){
        ans+=bit.query(v2[i]);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l=0,r,mid;
    long long x;
    cin>>n>>x;
    v.resize(n);
    BIT bit(n);
    r=n+1;
    for(int i=0;i<n;i++) cin>>v[i];
    while(r-l>1){
    	mid=(l+r)>>1;
    	if(check(mid,bit)<=x) l=mid;
    	else r=mid;
    }
    cout<<r-1<<'\n';
    return 0;
}