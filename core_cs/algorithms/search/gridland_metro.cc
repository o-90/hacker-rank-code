#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <utility>

using namespace std;


typedef unsigned long long ull;
typedef vector<vector<ull> > vvi;
typedef pair<ull, ull> pi;
typedef stack<pair<ull, ull> > sp;
typedef vector<pair<ull, ull> > vp;


bool compare_interval(pi p1, pi p2) {
  return (p1.first < p2.first);
}

ull merge_intervals(vp arr) {
  int n = arr.size();

  if (n <= 0) {
    return -1;
  }

  sp s;
  sort(arr.begin(), arr.end(), compare_interval);
  s.push(arr[0]);

  for (int i=1; i<n; i++) {
    pi top = s.top();
    if (top.second < arr[i].first) {
      s.push(arr[i]);
    } else if (top.second < arr[i].second) {
      top.second = arr[i].second;
      s.pop();
      s.push(top);
    }
  }

  ull total = 0;
  while (!s.empty()) {
    pi p = s.top();
    total += (p.second - p.first + 1);
    s.pop();
  }
  return total;
}

ull gridland_metro(ull n, ull m, ull k, vvi track) {
  if (k < 1) {
    return m * n;
  }
  vp v(k);
  for (int i=0; i<k; i++) {
    v[i].first = (m*(track[i][0]-1)) + track[i][1];
    v[i].second = (m*(track[i][0]-1)) + track[i][2];
  }
  ull ans = merge_intervals(v);
  return (n * m) - ans;
}

int main() {
  ull n, m, k;
  cin >> n >> m >> k;
  vector< vector<ull> > track(k, vector<ull>(3));
  for (int i=0; i<k; i++) {
    for (int j=0; j<3; j++) {
      cin >> track[i][j];
    }
  }
  ull result = gridland_metro(n, m, k, track);
  cout << result << '\n';
  return 0;
}
