#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

    int n = rnd.next(1, 20);
    cout << n << '\n';

    for (int i = 0; i < n; i++) {
        int ai = rnd.next(1, static_cast<int>(static_cast<int64_t>(1<<31) - 1));
        cout << ai << " \n"[i == n - 1];
    }

	return 0;
}
