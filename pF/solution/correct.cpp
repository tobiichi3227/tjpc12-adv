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
    p.assign()
    vector<array<long long, 3>> v(m);
    for(auto [w, u, v] : v) cin >> w >> u >> v, sum+=w;
    sort(v.rbegin(), v.rend());
    for(auto [w, u, v] : v)
    {
        if(fp(u)==fp(v)) continue;
        else
        {
            p[fp(u)]=fp(v);
            sum-=w;
            times--;
            if(!times) break;
        }
    }
    cout << sum;
}
