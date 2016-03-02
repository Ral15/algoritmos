#include <cstdio>
#include <iostream>

using namespace std;

int main () {
  int k ,n, m, x, y;
  while(1) {
    scanf("%d%*c",&k);
    if (k == 0) break;
    scanf("%d %d%*c",&n, &m );
    while (k--) {
      scanf("%d %d%*c",&x, &y );
      if (x == n || y == m ) printf("divisa\n");
      else if (x > n && y > m) printf("NE\n");
      else if (x > n && y < m) printf("SE\n");
      else if (x < n && y > m) printf("NO\n");
      else if (x < n && y < m) printf("SO\n");
    }
  }
  return 0;
}
