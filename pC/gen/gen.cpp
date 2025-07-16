#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

	int d = atoi(argv[1]);
	int n = atoi(argv[2]);
	long long s;
	long long x;
	int k;
	if(d==1000){
		s = rnd.next(0ll,100000ll);
		x = rnd.next(0ll,(s+1000000ll)*(s+1000000ll)+100000000ll);
	}else{
		s = rnd.next(0ll, 1000000000ll);
		x = rnd.next(0ll,1000000000ll*1000000000ll);
	}
	d = rnd.next(1,d);
	if(n!=0 || n!=1) n = rnd.next(0,min(n,d));
	cout<<s<<" "<<d<<" "<<n<<" "<<x<<'\n';
	for(int i=0;i<d;i++){
		if(d<1000){
			k=rnd.next(0,10000);
		}else{
			k=rnd.next(0,1000000);
		}
		cout<<k<<" \n"[i==d-1];
	}
	return 0;
}
// run now! burn Tobiichi's PC!!!
// bruh run again thanks
