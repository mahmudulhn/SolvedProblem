#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
int main() {
  int n, m, lm = 1, count = 0, c = 0;
  cin >> n >> m;
  int a[n], b[m];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];
  sort(a, a + n);
  sort(b, b + m);
  for (int i = 0; i < n; i++)
    lm = lcm(lm, a[i]);
  int l = lm;
  // cout<<lm<<"\n";
  while (lm <= b[0]) {
    count = 0;
    for (int i = 0; i < m; i++) {
      if (b[i] % lm == 0)
        count++;
    }
    if (count == m)
      c++;
    // cout<<lm<<"\n";
    lm = lm + l;
  }
  cout << c << "\n";
}
