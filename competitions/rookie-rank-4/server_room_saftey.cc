#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


string check_all(int n, vector<int> height, vector<int> position) {
  if (n == 1)
    return "BOTH";

  bool r_falls, l_falls = false;
  for (int j=n-1; j>=0; j--) {
    for (int i=0; i<j; i++) {
      l_falls = (position[i] + height[i]) >= position[j];
      if (l_falls)
        break;
    }
    if (!l_falls)
      break;
  }
  for (int j=0; j<n-1; j++) {
    for (int i=n-1; i>j; i--) {
      r_falls = (position[i] - height[i]) <= position[j];
      if (r_falls)
        break;
    }
    if (!r_falls)
      break;
  }
  if (r_falls && l_falls)
    return "BOTH";
  else if (r_falls)
    return "RIGHT";
  else if (l_falls)
    return "LEFT";
  else
    return "NONE";
}


int main() {
  int n;
  cin >> n;
  vector<int> position(n);
  for (int p=0; p<n; p++) {
    cin >> position[p];
  }
  vector<int> height(n);
  for (int h=0; h<n; h++) {
    cin >> height[h];
  }
  string ans = check_all(n, height, position);
  cout << ans << '\n';
  return 0;
}
