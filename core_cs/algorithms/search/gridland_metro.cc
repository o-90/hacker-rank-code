/* ---------------------------------------------------------------------------
 * The city of Gridland is represented as an (n x m) matrix where the rows
 * are numbered from 1 to n and the columns are numbered from 1 to m.
 * Gridland has a network of train tracks that always run in straight
 * horizontal lines along a row. In other words, the start and end points of
 * a train track are  and , where  represents the row number,  represents the
 * starting column, and  represents the ending column of the train track.  The
 * mayor of Gridland is surveying the city to determine the number of
 * locations where lampposts can be placed. A lamppost can be placed in any
 * cell that is not occupied by a train track.
 *
 * Given a map of Gridland and its  train tracks, find and print the number
 * of cells where the mayor can place lampposts.
 *
 * Note: A train track may (or may not) overlap other train tracks within the
 * same row.
 * -------------------------------------------------------------------------*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main () {
  int n, m, k;
  cin >> n >> m >> k;
  vector< vector<int> > track(k, vector<int>(3))
  for (int i=0; i<k; i++) {
    for (int j=0; j<3; j++) {
      con >> track[i][j];
    }
  }
  cout << '\n';
  return 0;
}
