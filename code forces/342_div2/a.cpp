#include <cstdio>
#include <iostream>


using namespace std;

int main () {
    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    a += d;
    while (a >= min(b,c)) {
      a -= min(b,c);
      ans ++;
    }
    cout << ans << endl;
  return 0;
}
