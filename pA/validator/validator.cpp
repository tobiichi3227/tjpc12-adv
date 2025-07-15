#include "testlib.h"
using namespace std;

const int MAXN = 20;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

	int n = inf.readInt(1, MAXN, "n");
    inf.readEoln();
    for (int i = 0; i < n; i++) {
        inf.readInt(1, static_cast<int>(static_cast<int64_t>(1<<31)-1), "ai");
        inf.readSpace();
    }
	inf.readEoln();
	inf.readEof();

	return 0;
}
