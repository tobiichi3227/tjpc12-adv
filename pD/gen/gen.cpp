#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

	int n = atoi(argv[1]);
	int q = atoi(argv[2]);
	int statu = atoi(argv[3]);
	n = rnd.next(1,n);
	q = rnd.next(1,q);
	cout<<n<<" "<<q<<'\n';
	if(statu==0){
		for(int i=0;i<q;i++){
			cout<<rnd.next(1,n)<<'\n';
		}
	}else if(statu==1){
		for(int i=1;i<=q;i++){
			if(i<=n) cout<<i<<'\n';
			else cout<<rnd.next(1,n)<<'\n';
		}
	}else{
		for(int i=0;i<q;i++){
			cout<<n<<'\n';
		}
	}
	return 0;
}
