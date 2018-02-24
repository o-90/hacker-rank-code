#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


char shifter(char c, int n) {
  if (!isalpha(c)) {
    return c;
  }
  char shifted;

  if (!isupper(c)) {
    shifted = 'a' + ((c - 'a' + n) % 26);
    return shifted;
  }
  shifted = 'A' + ((c - 'A' + n) % 26);
  return shifted;
}


int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int k;
  cin >> k;
  vector<char> v(n);
  for (int i=0; i<n; i++) {
    v[i] = shifter(s[i], k);
  }
  string out_str(v.begin(), v.end());
  cout << out_str << '\n';
  return 0;
}
