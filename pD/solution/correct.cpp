#include<bits/stdc++.h>
using namespace std;

const int nmax = 20000000;
int minp[nmax+5];
int pnum[nmax+5];
int divn[nmax+5];
vector<int> prime;

void sieve(){
    int tem;
    prime.reserve(nmax+100);
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
            if(i%p==0){
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
    sieve();
    int q,tem;
    cin>>q;
    while(q--){
        cin>>tem;
        cout<<divn[tem]<<'\n';
    }
}
