#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define endl '\n'

using namespace std;



int main () {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d, r;
	while (1) {
		cin >> n >> d >> r;
		if (n == 0 && d == 0 && r == 0) break;
		vector<int> morning (n);
		vector<int> afternoon (n);
		for (int i = 0; i < n; i ++) cin >> morning[i];
		for (int j = 0; j < n; j ++) cin >> afternoon[j];
		sort(morning.begin(), morning.end());
		sort(afternoon.begin(),afternoon.end(), greater<int>());
		int total = 0, aux;
		for (int ii = 0; ii < afternoon.size(); ii ++) {
			int aux = (morning[ii] + afternoon[ii]);
			if (aux > d) total += (aux - d) * r;
		}
		cout << total<< endl;
	}
	
	return 0;
}
