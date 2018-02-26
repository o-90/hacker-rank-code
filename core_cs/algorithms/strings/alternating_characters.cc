// imports
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <utility>

// namespace
using namespace std;

// definitions
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ull> vull;
typedef vector<vector<int> > vvi;
typedef vector<vector<ull> > vvull;

// static
const int INF = 1000000007;


char _flip(char c) {
  return (c == 'A') ? 'B' : 'A';
}

int alt_chars(string str) {
  int count = 0;
  char expected = _flip(str[0]);
  for (int i=1; i<str.length(); i++) {
    if (str[i] != expected) {
      count++;
    } else {
      expected = _flip(expected);
    }
  }
  return count;
}

// main
int main () {
  int n;
  cin >> n;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    int ans = alt_chars(s);
    cout << ans << '\n';
  }
  return 0;
}
