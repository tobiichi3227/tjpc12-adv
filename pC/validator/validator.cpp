#include "testlib.h"
#include <cstdint>
using namespace std;

const int MAXN = 1000;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

    int require_d = atoi(argv[1]);
    int require_n = atoi(argv[2]);

    inf.readInt(0, 1e9, "s");
    inf.readSpace();
    int d = inf.readInt(1, require_d, "d");
    inf.readSpace();
    int n = inf.readInt(0, d, "n");
    if (require_n == 0 || require_n == 1) ensure(n == require_n);
    inf.readSpace();
    inf.readLong(0LL, 1e18, "x");
    inf.readEoln();

    for (int i = 0; i < d; i++) {
        inf.readInt(0, 1e6, "k");
        if (i != d - 1) inf.readSpace();
    }

	inf.readEoln();
	inf.readEof();

	return 0;
}
