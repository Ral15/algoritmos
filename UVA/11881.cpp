#include <iostream>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <cmath>
#define endl '\n'
using namespace std;

const double EPS = 1e-9;


double pw(double x, int e) {
  double ans = 1;
  while (e--) {
    ans *= x;
  }
  return ans;
}

double NPV (double irr, const vector<int>& nums) {
  double ans = 0;
  for (int i = 0; i < nums.size(); i ++ ) {
    ans += (double)nums[i] / pw(((double)1 + irr), (double)i);
  }
  return ans;

}

int main () {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  while (1) {
    cin >> t;
    if (t == 0) break;
    vector<int> nums(t+1);
    for (int i = 0; i <= t; i ++) cin >> nums[i];
    double lo = -1, hi = 1e26;
    for (int i = 0; i < 100; i++) {
      double mid = (lo + hi) / 2.0;
      double res = NPV (mid, nums);
      if (res > EPS) lo = mid;
      else hi = mid;
    }
    cout << fixed << setprecision(2) << lo  << endl;
  }
  return 0;
}
