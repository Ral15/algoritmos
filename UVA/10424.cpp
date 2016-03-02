#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int sum(int x) {
  int aux = 0;
  while (x) {
    aux += (x%10);
    x /= 10;
  }
  if (aux > 9) {
    x = aux;
    aux = sum(x);
  }
  return aux;
}

int main () {
  string a, b;
  int sum1, sum2;
  float ans = 0.0;
  while (getline(cin, a) != '\0' && getline(cin, b) != '\0') {
      for (int i = 0; i < a.size(); i ++)
        if (isalpha(a[i])) sum1 += (tolower(a[i])) - 'a' + 1;
      sum1 = sum(sum1);
      for (int j = 0; j < b.size(); j ++)
        if (isalpha(b[j])) sum2 += (tolower(b[j])) - 'a' + 1;
      sum2 = sum(sum2);
      ans = (float)(min(sum1,sum2)) / (float)(max(sum1,sum2));
      printf("%0.2f %%\n",ans*100.0);
      sum1 = sum2 = ans = 0;
  }
  return 0;
}
