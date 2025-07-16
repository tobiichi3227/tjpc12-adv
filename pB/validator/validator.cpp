#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

	int upper_n = atoi(argv[1]);
    int n = inf.readInt(1, upper_n, "n");
    inf.readSpace();
    int64_t x = inf.readLong(0LL, static_cast<int64_t>(1e13), "x");
    ensuref(x <= static_cast<int64_t>(n) * static_cast<int64_t>(n - 1) / 2LL, "inversion pair should not greater than n * (n-1)/2");
    inf.readEoln();

    for (int i = 0; i < n; i++) {
        inf.readInt(1, n, "ai");
        if (i != n - 1) inf.readSpace();
    }

    inf.readEoln();
    inf.readEof();


	return 0;
}
