/*
Line Sweep + binary search
*/
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


//pow not safe when using int
int sq(int x) {
  return x*x;
}

int main () {
  int t, num_case = 0;
  scanf("%d%*c",&t );
  while (t--) {
    if (num_case++) printf("\n");
    int n;
    double x, y;
    scanf("%d%*c",&n);
    vector<pair<int,int>> points(n);
    for (int i = 0; i < n; i ++) scanf("%d %d\n",&points[i].first, &points[i].second);
    sort(points.begin(), points.end());
    set<pair<int, int>> s;
    int h = 1<<30;
    int left = 0;
    for (int i = 0; i < n; i++) {
        pair<int, int> curr = points[i];
        while (points[i].first - points[left].first > h) {
          pair<int, int> p = points[i];
          s.erase(make_pair(p.second, p.first));
          left ++;
        }
        set<pair<int,int>>::iterator it1 = s.lower_bound(make_pair(curr.second - h, 0));
        set<pair<int,int>>::iterator it2 = s.upper_bound(make_pair(curr.second + h, 0));
        for (it1; it1 != it2; it1 ++) {
          pair<int, int> p = *it1;
          int d = sq(curr.second - p.first) + sq(curr.first - p.second);
          if (d < h) {
            x = (curr.first + p.second) / 2.0;
            y = (curr.second + p.first) / 2.0;
            h = d;
          }
        }
      s.insert(make_pair(curr.second, curr.first));
    }
    printf("%.3f %.3f\n",x, y);
  }//end
  return 0;
}
