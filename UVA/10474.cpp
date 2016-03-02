#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'

using namespace std;




// int binary_search(vector<int>& marbles, int x, int size) {
//   int low = 0, high = size, mid;
//   while (low < high) {
//     mid = low + (high-low)/2;
//     if (marbles[mid] >= x) high = mid;
//     else low = mid + 1;
//   }
//   if (marbles[low] != x) return -1;
//   return low + 1;
//
// }


int main () {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int k = 1;
  while (1){
    int n, q, num = 0;
    cin >> n >> q;
    if (n == 0 || q == 0) break;
    vector<int> marbles (n);
    for (int i = 0; i < n; i ++) cin >> marbles[i];
    sort(marbles.begin(), marbles.end());
    cout << "CASE# " << k++ << ":" << endl;
    while (q--) {
      cin >> num;
      int ans = lower_bound(marbles.begin(), marbles.end(), num) - marbles.begin();
      if (marbles[ans] != num) ans = -1;
      ans++;
      // int ans = binary_search(marbles, num, n);
      if (ans > 0) cout << num << " found at " << ans << endl;
      else cout << num << " not found" << endl;
    }

  }

  return 0;
}
