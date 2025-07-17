#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> p;

ll fp(ll n)
{
    if(p[n]==n) return n;
    return p[n]=fp(p[n]);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, sum=0, times;
    cin >> n >> m;
    times=n-1;
    p.assign(n+1, 0);
    for(int i=1;i<=n;i++) p[i]=i;
    vector<array<long long, 3>> v(m);
    for(auto& [w, u, y] : v) cin >> u >> y >> w, sum+=w;
    sort(v.rbegin(), v.rend());
    for(auto& [w, u, y] : v)
    {
        //cout << w<<" " << u<<" "<<y<<'\n';
        if(fp(u)==fp(y)) continue;
        else
        {
            p[fp(u)]=fp(y);
            sum-=w;
            times--;
            if(!times) break;
        }
    }
    cout << sum;
}
