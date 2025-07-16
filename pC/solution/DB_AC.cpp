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
    if(s>=x)
    {
        cout << 0;
        return 0;
    }
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(int day=1;day<=d;day++)
    {
        cin >> tmp;
        pq.push_back(tmp);
        s+=tmp*2;
        if(pq.size()>d)
        {
            s-=pq.top();
            pq.pop();
        }
        if(s>=x)
        {
            cout << day;
            return 0;
        }
    }
    cout << -1;

}
