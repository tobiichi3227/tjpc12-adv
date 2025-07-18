#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

    int n = rnd.next(1, 10);
    int k = rnd.next(1, 10);
    cout << n << ' '<<k<<'\n';
    int remain=10;
    for (int i = 0; i < n; i++) {
        int a,b,c;
        a=rnd.next(1, 100);
        b=rnd.next(1, remain);
        c=rnd.next(1, 100);
        cout << a<<' '<<b<<' '<<c<<' ' << " \n"[i == n - 1];
    }

	return 0;
}
