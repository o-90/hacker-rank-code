/* ===========================================================================
 * Author:  John Martinez
 * Email:   <john.r.martinez14@gmail.com>
 * Date:    2017-11-05  11:52:45
 * Description:
 *    Letters in some of the SOS messages are altered by cosmic radiation
 *    during transmission. Given the signal received by Earth as a string, S,
 *    determine how many letters of Sami's SOS have been changed by radiation.
 * ===========================================================================
 */

#include <iostream>
#include <algorithm>
#include <string>

int main()
{
  // initialize
  std::string s;
  int count = 0;

  // import data
  std::cin >> s;
  for (int i=0; i<s.size(); i++)
  {
    if (s[i] != "SOS"[i%3])
    {
      count++;
    }
  }
  std::cout << "ans:    " << count << std::endl;
  return 0;
}
