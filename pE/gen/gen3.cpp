#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

    int n = rnd.next(1, 1000);
    int k = rnd.next(0, 8e7);
    cout << n << ' '<<k<<'\n';
    int remain=1000;
    for (int i = 0; i < n; i++) {
        int a,b,c;
        a=rnd.next(0, 1e5);
        b=rnd.next(0, remain);
        remain-=b;
        c=rnd.next(1, 10000000);
        cout << a<<' '<<b<<' '<<c<<' ' << " \n"[i == n - 1];
    }

	return 0;
}
