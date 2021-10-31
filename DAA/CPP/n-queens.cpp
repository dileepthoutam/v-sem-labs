#include <bits/stdc++.h>
using namespace std;

void printQueens(vector<int> Q) {
	for(int q: Q)
		cout << q+1 << " ";
	cout << "\n";
}

void placeQueens(vector<int> Q, int r) {
	if (r == Q.size())
		printQueens(Q);
	else {
		for(int j=0; j<Q.size(); j++) {
			bool legal=true;
			for(int i=0; i<r; i++) {
				if (Q[i] == j || Q[i] == j - r + i || Q[i] == j + r - i) {
					legal = false;
					break;
				}
			}
			if (legal) {
				Q[r] = j;
				placeQueens(Q, r+1);
			}
		}
	}
}

int main() {
	int n; cin >> n;
	vector<int> Q(n, 0);

	placeQueens(Q, 0);


	return 0;
}
