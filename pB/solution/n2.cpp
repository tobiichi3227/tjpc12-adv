// n^2, using bubble+ideal
#include<bits/stdc++.h>
using namespace std;

vector<int> v, v2;
long long ct=0;

void bubble(vector<int>& v1){
    for(int i=v1.size()-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(v1[j]>v1[j+1]){
                swap(v1[j],v1[j+1]);
                ct++;
            }
        }
    }
}

int main(){
    int n;
    long long x;
    cin>>n>>x;
    v.resize(n);
    for(auto& i:v) cin>>i;
    v2=v;
    bubble(v2);
    for(int i=n;i>=0;i--){
        for(int j=i;j<n-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                ct--;
            }
        }
        if(ct<=x){
            cout<<i<<'\n';
            goto bb;
        }
    }
    bb:;
    return 0;
}