#include <iostream>
using namespace std;
#define MAX_N 10
int n;
int rcd[MAX_N];
int used[MAX_N] = {0};
int num[MAX_N];
void full_permutation(int l) {
	if (l == n) {
		for (int i = 0; i < n; i++)
			cout << rcd[i] << " ";
		cout << endl; return;
	}
	for (int i = 0; i < n; i++) {
		if (!used[i]) {
			used[i] = 1;//this number has been used.
			rcd[l] = num[i];
			full_permutation(l + 1);//next position
			used[i] = 0;//clear the flag
		}
	}
}
int main() {
	while (cin >> n) {
		for (int i = 0; i < n; i++) cin >> num[i];
		full_permutation(0);
	}
	return 0;
}
