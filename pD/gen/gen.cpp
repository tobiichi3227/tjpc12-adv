#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

	int n = atoi(argv[1]);
	int q = atoi(argv[2]);
	int statu = atoi(argv[3]);
	n = rnd.next(n>>1,n);
	q = rnd.next(q>>1,q);
	if(statu==0){
		cout<<n<<" "<<q<<'\n';
		for(int i=0;i<q;i++){
			cout<<rnd.next(1,n)<<'\n';
		}
	}else if(statu==1){
		cout<<n<<" "<<q<<'\n';
		for(int i=1;i<=q;i++){
			if(i<=n) cout<<i<<'\n';
			else cout<<rnd.next(1,n)<<'\n';
		}
	}else if(statu==2){
		cout<<n<<" "<<q<<'\n';
		for(int i=0;i<q;i++){
			cout<<n<<'\n';
		}
	}else if(statu==3){
		cout<<20000000<<" "<<10000000<<'\n';
		for(int i=1;i<=10000000;i++){
			cout<<(i&1?i:n-i)<<'\n';
		}
	}else if(statu==4){
		cout<<20000000<<" "<<10000000<<'\n';
		int j=1;
		for(int i=1;i<=10000000;i++){
			cout<<(j==0?20000000:j)<<'\n';
			j+=2999999;
			j%=20000000;
		}
	}else{
		cout<<20000000<<" "<<10000000<<'\n';
		for(int i=0;i<10000000;i++){
			cout<<rnd.next(1,20000000)<<'\n';
		}
	}
	return 0;
}
