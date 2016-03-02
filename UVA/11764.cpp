#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main () {
  int t, n, high = 0, low = 0, accum = 1;
  cin >> t;
  while (t--) {
    cin >> n;
    vector<int> walls(n+1);
    for (int i = 1; i <= n; i ++) cin >> walls[i];
    for (int j = 1; j < n; j ++) {
      if (walls[j] > walls[j+1]) low ++;
      else if (walls[j] < walls[j+1]) high ++;
    }
    cout << "Case " << accum << ": " << high << " " << low << endl;
    accum ++;
    high = low = 0;
  }
  return 0;
}
