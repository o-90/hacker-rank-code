#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

char shifter(char c, int n)
{
  if (!isalpha(c))
  {
    return c;
  }
  char shifted;
  if (!isupper(c))
  {
    shifted = 'a' + ((c - 'a' + n) % 26);
    return shifted;
  }
  shifted = 'A' + ((c - 'A' + n) % 26);
  return shifted;
}

int main()
{
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  int k;
  std::cin >> k;
  std::vector<char> v(n);
  for (int i=0; i<n; i++)
  {
    v[i] = shifter(s[i], k);
  }
  std::string out_str(v.begin(), v.end());
  std::cout << out_str << std::endl;
  return 0;
}
