// nlogn, bit+ideal
#include<bits/stdc++.h>
using namespace std;

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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long ct=0,x;
    cin>>n>>x;
    vector<int> vi(n);
    BIT bit(n);
    for(auto& i:vi) cin>>i;
    for(int i=n-1;i>=0;i--) ct+=bit.query(vi[i]);
    bit.bit.assign(n+1,0);
    for(int i=n-1;i>=0;i--){
        ct-=bit.query(vi[i]);
        if(ct<=x){
            cout<<(i==n-1?n:i)<<'\n';
            break;
        }
    }
    return 0;
}