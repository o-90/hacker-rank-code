
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;


long get_bit_exp(long n) {
  float x = log(n) / log(2);
  long c = ceil(x);
  if (c == floor(x))
    return c + 1;

  return c;
}


long and_prod(long a, long b) {
  if (b >= pow(2, get_bit_exp(a))) {
    return 0;
  } else {
    long ans = a;
    while (a < b) {
      a++;
      ans &= a;
    }
    return ans;
  }
}


int main() {
  int n;
  cin >> n;
  for (int i=0; i<n; i++) {
    long a;
    long b;
    cin >> a >> b;
    long result = and_prod(a, b);
    cout << result << '\n';
  }
  return 0;
}
