#include <iostream>

using namespace std;


int main() {
  int t;
  cin >> t;
  unsigned int mask = 0xffffffff;
  for (int i=0; i<t; i++) {
    unsigned int num;
    cin >> num;
    unsigned ans = num ^ mask;
    cout << ans << '\n';
  }
  return 0;
}
