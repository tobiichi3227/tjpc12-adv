// n^3, using bubble + brute
#include<bits/stdc++.h>
using namespace std;

vector<int> v,v2;
long long ans=0;

void bubble(vector<int>& v1){
    for(int i=v1.size()-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(v1[j]>v1[j+1]){
                swap(v1[j],v1[j+1]);
                ans++;
            }
        }
    }
}

long long check(int n){
    v2=v;
    ans=0;
    sort(v2.begin()+n,v2.end());
    bubble(v2);
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