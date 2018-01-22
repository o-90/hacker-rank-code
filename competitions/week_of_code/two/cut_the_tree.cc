// week of code 2; problem 2; "cut the tree"; medium;

#include <iostream>
#include <vector>


int cutTheTree(std::vector<int> data, std::vector< std::vector<int> > edges) {
  return 0;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> data(n);
    for(int data_i=0; data_i<n; data_i++){
       std::cin >> data[data_i];
    }
    std::vector< std::vector<int> > edges(n-1, std::vector<int>(2));
    for(int edges_i=0;edges_i<n-1; edges_i++) {
       for(int edges_j=0; edges_j<2; edges_j++) {
          std::cin >> edges[edges_i][edges_j];
       }
    }
    int result = cutTheTree(data, edges);
    std::cout << result << std::endl;
    return 0;
}
