#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main() {
  int n, t;
  cin >> n >> t;
  vector<int> tm(n);
  for (int i=0; i<n; i++) {
    cin >> tm[i];
  }
  sort(tm.begin(), tm.end());
  int ans, count = 0;
  for (int i=0; i<n; i++) {
    ans = i;
    if (count == t) {
      break;
    }
    if (count > t) {
      ans--;
      break;
    }
    count += tm[i];
  }
  cout << "answer: " << ans << '\n';
  return 0;
}
