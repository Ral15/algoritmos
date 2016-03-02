#include <cstdio>
#include <iostream>

using namespace std;

int main () {
  int x, y, cases;
  cin >> cases;
  while (cases--) {
    cin >> x >> y;
    cout << (x/3) * (y/3) << endl;
  }
    return 0;
}
