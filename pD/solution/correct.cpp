#include<bits/stdc++.h>
using namespace std;

vector<int> minp, pnum, divn,prime;

void sieve(const int& nmax){
    int tem;
    prime.reserve(nmax);
    minp.resize(nmax+5);
    pnum.resize(nmax+5);
    divn.resize(nmax+5);
    pnum[1]=minp[1]=0;
    divn[1]=1;
    for(int i=2;i<=nmax;++i){
        if(!minp[i]){
            prime.push_back(i);
            minp[i]=i;
            divn[i]=2;
            pnum[i]=1;
        }
        for(int p:prime){
            tem = p*i;
            if(tem>nmax) break;
            minp[tem]=p;
            if(minp[i]==p){
                pnum[tem]=pnum[i]+1;
                divn[tem]=divn[i]/(pnum[i]+1)*(pnum[tem]+1);
                break;
            }else{
                pnum[tem]=1;
                divn[tem]=(divn[i]<<1);
            }
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,q,tem;
    cin>>n>>q;
    sieve(n);
    while(q--){
        cin>>tem;
        cout<<divn[tem]<<'\n';
    }
}
