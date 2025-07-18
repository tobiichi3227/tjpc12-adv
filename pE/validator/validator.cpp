#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

    int n, k;
    string task = argv[1];
    if (task == "brute") {
        n = inf.readInt(1, 10, "n");
        inf.readSpace();
        k = inf.readInt(0, static_cast<int>(8e7));

        int sum_h = 0;
        for (int i = 0; i < n; i++) {
            inf.readInt(0, static_cast<int>(8e7), "t");
            inf.readSpace();
            sum_h += inf.readInt(0, static_cast<int>(8e7), "h");
            inf.readSpace();
            inf.readInt(0, static_cast<int>(8e7), "b");
            inf.readEoln();
        }

        ensure(sum_h < 10);
    } else if (task == "dp-n-gas") {
        n = inf.readInt(1, 10, "n");
        inf.readSpace();
        k = inf.readInt(0, static_cast<int>(8e7));

        int sum_max_h_t = 0;
        for (int i = 0; i < n; i++) {
            int t = inf.readInt(0, static_cast<int>(8e7), "t");
            inf.readSpace();
            int h = inf.readInt(0, static_cast<int>(8e7), "h");
            inf.readSpace();
            inf.readInt(0, static_cast<int>(8e7), "b");
            inf.readEoln();
            sum_max_h_t += max(t, h);
        }

        ensure(sum_max_h_t <= 1000);

    } else if (task == "dp-n-joy") {
        n = inf.readInt(1, 1000, "n");
        inf.readSpace();
        k = inf.readInt(0, static_cast<int>(8e7));

        int sum_h = 0;
        for (int i = 0; i < n; i++) {
            inf.readInt(0, static_cast<int>(8e7), "t");
            inf.readSpace();
            sum_h += inf.readInt(0, static_cast<int>(8e7), "h");
            inf.readSpace();
            inf.readInt(0, static_cast<int>(8e7), "b");
            inf.readEoln();
        }

        ensure(sum_h < 1000);
    }

	return 0;
}
