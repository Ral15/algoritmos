#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#define endl '\n'

using namespace std;

int main () {
  	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d;
	while (1) {
		cin >> n >> d;
		if (n == 0 && d == 0) break;
		if (n > d) {
			cout << "Loowater is doomed!" << endl;
			break;
		}
		vector<int> heads(n);
		vector<int> knights(d);
		for (int i = 0; i < n; i ++) cin >> heads[i];	
		for (int j = 0; j < d; j ++) cin >> knights[j];
		sort(heads.begin(), heads.end());
		sort(knights.begin(), knights.end());
		int total = 0, accum = 0;
		for (int k = 0; k < heads.size(); k ++) {
			for (int l = 0; l < knights.size(); l ++) {
				if (heads[k] <= knights[l]) {
					total += knights[l];
					knights.erase(knights.begin() + l);
					accum ++;
					break;
				}

			}
			if (accum == heads.size()) break;
		}
		if (accum != heads.size()) cout << "Loowater is doomed!" << endl;
		else cout << total << endl;
	}
	return 0;
}