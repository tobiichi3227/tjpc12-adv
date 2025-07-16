#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	// TODO
	int upper_n = atoi(argv[1]);
	int n = rnd.next(1,upper_n);
	long long x = rnd.next(1ll,(long long)n*(n-1)/2+n);

	cout << n << " " << x << endl;

	for(int i=0;i<n;i++){
		cout << rnd.next(1,n) << " \n"[i==n-1];
	}
	return 0;
}
