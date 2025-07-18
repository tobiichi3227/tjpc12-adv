#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

    int max_n = atoi(argv[1]);
    int max_q = atoi(argv[2]);

	int n = inf.readInt(1, max_n, "n");
    inf.readSpace();
    int q = inf.readInt(1, max_q, "q");
	inf.readEoln();

    while (q--) {
        inf.readInt(1, n);
        inf.readEoln();
    }
	inf.readEof();

	return 0;
}
