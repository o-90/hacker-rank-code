// week of code 2; problem 1; "manasa and stones"; Easy;

#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> stones(int n, int a, int b) {
  std::vector<int> out;
  for (int i=0; i<n; i++) {
    int j = (n - i - 1) * a + (i * b);
    if (!(std::find(out.begin(), out.end(), j) != out.end())) {
      out.push_back(j);
    }
  }
  if (a > b) {
    std::reverse(out.begin(), out.end());
  }
  return out;
}


int main() {
  int T;
  std::cin >> T;
  for(int a0=0; a0<T; a0++){
    int n;
    std::cin >> n;
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;
    std::vector<int> result = stones(n, a, b);
    for (ssize_t i=0; i<result.size(); i++) {
      std::cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    std::cout << '\n';
  }
  return 0;
}
