#include <iostream>
#include <vector>


std::vector<int> revised_russian_roulette(std::vector<int> doors) {
  int m = 0;
  int i = 0;
  int s = 0;
  std::vector<int> out(2);
  while (i < doors.size()) {
    if (doors[i] == 1) {
      if (doors[i+1] == 1) {
        i += 2;
        s += 2;
      } else {
        i++;
        s++;
      }
      m++;
    } else {
      i++;
    }
  }
  out[0] = m;
  out[1] = s;
  return out;
}


int main () {
  int n;
  std::cin >> n;
  std::vector<int> doors(n);
  for (int di=0; di<n; di++) {
    std::cin >> doors[di];
  }
  std::vector<int> result = revised_russian_roulette(doors);
  for (ssize_t i=0; i<result.size(); i++) {
    std::cout << result[i] << (i != result.size() -1 ? " " : "");
  }
  std::cout << std::endl;
}
