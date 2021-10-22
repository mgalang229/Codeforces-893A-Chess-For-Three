#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int player1 = 1;
	int player2 = 2;
	int spectator = 3;
	int loser = spectator;
	for (int i = 0; i < n; i++) {
		// the only case wherein the answer would be NO is when the current winner is the loser of the previous game
		if (a[i] == loser) {
			cout << "NO" << '\n';
			return 0;
		}
		// if the winner is player 1, then mark this player as the current loser (swap player 1 w/ spectator)
		// otherwise, mark player 2 as the current loser (swap player 2 w/ spectator)
		if (a[i] == player1) {
			loser = player2;
			swap(player2, spectator);
		} else {
			loser = player1;
			swap(player1, spectator);
		}
	}
	cout << "YES" << '\n';
	return 0;
}
