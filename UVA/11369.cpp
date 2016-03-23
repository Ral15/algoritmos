#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#define endl '\n'

using namespace std;

int main () {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, size;
	cin >> t;
	while (t --) {
		int total = 0;
		cin >> size;
		vector<int> prices (size + 1);
		for (int i = 1; i <= size; i ++ ) cin >> prices[i];
		sort(prices.rbegin(), prices.rend() - 1);
		for (int h = 3; h <= size; h = h + 3) total += prices[h];
		cout << total << endl;
	}
	return 0;
}