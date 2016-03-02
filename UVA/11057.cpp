#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
  int n, i;
  while ((scanf("%d%*c",&n) != EOF)) {
    vector<int> books (n);
    for (i = 0; i < n; i ++) scanf("%d ", &books[i]);
    sort(books.begin(),books.end());
    i = 0;
    int j = n -1, total, x, y;
    scanf("%d%*c", &total);
    while (i < j) {
      if ((books.at(i) + books.at(j)) == total) {
        x = books.at(i);
        y = books.at(j);
        j --;
      }else if ((books.at(i) + books.at(j)) < total) i ++;
      else if ((books.at(i) + books.at(j)) > total)j --;
    }
    printf("Peter should buy books whose prices are %d and %d.\n\n", x, y);
}
  return 0;
}
