#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<string> vs;

int main() {
  int n;
  cin >> n;
  vs arr(n);
  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }
  int total = 0;
  for (char c='a'; c<='z'; c++) {
    int count = 0;
    for (int i=0; i<arr.size(); i++) {
      if (arr[i].find_first_of(c) != string::npos) {
          count++;
          // cout << count << '\n';
      }
    }
    // cout << "--------------------------------" << '\n';
    if (count == n)
      total++;
  }
  cout << total << '\n';
  return 0;
}
