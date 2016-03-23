//Greedy approach to solve this problem
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;


struct Ans {
  int pos;
  double tot;
};

bool comp (const Ans &i, const Ans &j) {
  return i.tot < j.tot;
}

int main () {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int c, q;
  cin >> c;
  while (c --) {
    cin >> q;
    // vector<pair<double,int> > ans(q + 1);
    vector<Ans> ans (q + 1);
    double days, fee;
    for (int i = 1; i <= q; i ++) {
      cin >> days >> fee;
      // ans[i].first = fee/days;
      // ans[i].second = i;
      ans[i].pos = i;
      ans[i].tot = fee/days;
    }
    stable_sort(ans.rbegin(),ans.rend() - 1, comp);
    cout << ans[1].pos;
    for (int j = 2; j <= q; j ++) cout << " " << ans[j].pos;
    cout << endl;
    if (c) cout << endl;

  }



  return 0;
}



