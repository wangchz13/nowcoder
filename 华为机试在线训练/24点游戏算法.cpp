#include <iostream>
#include <algorithm>
using namespace std;

bool isfind;
int a[4];

void dfs(int curr, int index) {
	if (curr == 24) {
		isfind = true;
		return;
	}
	if (curr > 24 || index >= 4) return;
	for (int flag = 0; flag < 4; flag++) {
		switch (flag) {
		case 0: dfs(curr + a[index], index + 1); break;
		case 1: dfs(curr - a[index], index + 1); break;
		case 2: dfs(curr * a[index], index + 1); break;
		case 3: dfs(curr / a[index], index + 1); break;
		}
		if (isfind) return;
	}
}

int main() {
	while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
		isfind = false;
		sort(a, a + 4);
		do {
			dfs(a[0], 1);
			if (isfind) break;
		} while (next_permutation(a, a + 4));
		if (isfind)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}
