#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll s, d, n, x, tmp;
    cin >> s >> d >> n >> x;
    if(s*s>=x)
    {
        cout << 0;
        return 0;
    }
    vector<ll> mx(n);
    ll idx=0;
    for(int day=1;day<=d;day++)
    {
        cin >> tmp;
        s+=tmp*2;
        if(idx<n)
        {
            mx[idx]=tmp;
            idx++;
        }
        else
        {
            ll mn=LLONG_MAX;
            for(int j=0;j<n;j++)
            {
                if(mx[j]<mn)
                {
                    idx=j;
                    mn=mx[j];
                }
            }
            if(mn<tmp)
            {
                mx[idx]=tmp;
                s-=mn;
            }
            idx=n;
        }
        if(s*s>=x)
        {
            cout << day;
            return 0;
        }
    }
    cout << -1;
}
