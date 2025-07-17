#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

	int d = atoi(argv[1]);
	int n = atoi(argv[2]);
	int ans = atoi(argv[3]);
	long long s;
	long long x;
	long long k,tmp;
	if(d==1000){
		s = rnd.next(0ll,100000ll);
		x = rnd.next((s+1000ll)*(s+1000ll),(s+1000000000ll)*(s+1000000000ll));
	}else{
		s = rnd.next(0ll, 1000000000ll);
		x = rnd.next((s+100000ll)*(s+100000ll),1000000000ll*1000000000ll);
	}
	d = rnd.next(1,d);
	if(n!=0 && n!=1) n = rnd.next(0,min(n,d));
	cout<<s<<" "<<d<<" "<<n<<" "<<x<<'\n';
	tmp = (sqrt(x)-s+rnd.next(1,d+100))/(d+n);
	
	for(int i=0;i<d;i++){
		k = min(tmp + rnd.next(0,1), rnd.next(500000ll,1000000ll));
		cout<<k<<" \n"[i==d-1];
	}
	return 0;
}
