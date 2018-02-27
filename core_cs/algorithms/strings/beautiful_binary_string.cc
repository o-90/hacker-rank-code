/*----------------------------------------------------------------------------
 * Alice has a binary string, B, of length n.  She thinks a binary string is
 * beautiful if and only if it doesn't contain the substring "010".
 *
 * In one step, Alice can change a 0 to a 1 (or vice-versa).  Count and print
 * the minimum number of steps needed to make Alice see the string as
 * beautiful.
 *---------------------------------------------------------------------------*/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;


int make_beautiful(string s, int n) {
	int count = 0;
	for (int i=0; i<(n-2); i++) {
		string sub_str = s.substr(i, 3);
		if (sub_str == "010") {
			s[i+2] = '1';
			count++;
		}
	}
	return count;
}


int main() {
	int n;
	cin >> n;
	string str;
	for (int i=0; i<n; i++) {
		cin >> str;
	}

	int ans = make_beautiful(str, n);
	cout << ans << '\n';
	return 0;
}
