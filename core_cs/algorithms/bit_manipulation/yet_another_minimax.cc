#include <algorithm>
#include <iostream>
#include <vector>

int bits = -1;


int another_minimax(std::vector<int> a) {
  return 0;
}


int main() {
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (int ai=0; ai<n; ai++) {
    std::cin >> a[ai];
  }
  // int result = another_minimax(a);
  // std::cout << result << '\n';
  std::sort(a.begin(), a.end());
  for (int i=0; i<n; i++) {
    int v = a[i] ^ a[i+1];
    std::cout << "v: " << v << '\n';
    if (v == 0) {
      continue;
    }
    int bit = 0;
    while ((2 << bit) <= v) {
      ++bit;
    }
    bits = std::max(bits, bit);
    std::cout << "bits: " << bits << '\n';
  }
  return 0;
}
