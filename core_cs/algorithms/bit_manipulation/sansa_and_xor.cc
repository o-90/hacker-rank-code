
#include <vector>
#include <iostream>

int sansa_xor(std::vector<int> arr) {
  if (arr.size() % 2 == 0)
    return 0;
  else {
    int a = 0;
    for (int i=0; i<arr.size(); i++) {
      if (i % 2 == 0) {
        a ^= arr[i];
      }
    }
    return a;
  }
}

int main() {
  int t;
  std::cin >> t;
  for (int a0=0; a0<t; a0++) {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int arr_i=0; arr_i<n; arr_i++) {
      std::cin >> arr[arr_i];
    }
    int result = sansa_xor(arr);
    std::cout << result << std::endl;
  }
  return 0;
}
