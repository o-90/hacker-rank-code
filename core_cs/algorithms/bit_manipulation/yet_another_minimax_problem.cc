#include <bits/stdc++.h>

const int MAXN = 200100;
const int MAXLOG = 35;
int a[MAXN];
int bits = -1;

int nodes = 3;
int to[MAXN * MAXLOG][2];

void add(int x, int u) {
  for (int i=bits-1; i>=0; --i) {
    bool b = x & (1 << i);
    if (!to[u][b]) {
      to[u][b] = nodes++;
    }
    u = to[u][b];
  }
}

int get(int x, int u) {
  int res = 0;
  for (int i=bits-1; i>=0; --i) {
    bool b = x & (1 << i);
    if (!to[u][b]) {
      b ^= 1;
      res ^= (1 << i);
    }
    assert(to[u][b]);
    u = to[u][b];
  }
  return res;
}

int main() {
  int n;
  std::cin >> n;
  for (int i=0; i<n; i++) {
    std::cin >> a[i];
  }
}

/*

#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((int) (x).size())
#define forn(i,n) for (int i = 0; i < int(n); ++i)

const int maxn = 200100;
const int maxLog = 35;
int a[maxn];
int bits = -1;

int nodes = 3;
int to[maxn * maxLog][2];

void add(int x, int u) {
    for (int i = bits - 1; i >= 0; --i) {
        bool b = x & (1 << i);
        if (!to[u][b])
            to[u][b] = nodes++;
        u = to[u][b];
    }
}

int get(int x, int u) {
    int res = 0;
    for (int i = bits - 1; i >= 0; --i) {
        bool b = x & (1 << i);
        if (!to[u][b]) {
            b ^= 1;
            res ^= (1 << i);
        }
        assert(to[u][b]);
        u = to[u][b];
    }
    return res;
}

int main() {
    #ifdef LOCAL
    assert(freopen("yamp.in", "r", stdin));
    #endif
    int n;
    cin >> n;
    forn (i, n)
        cin >> a[i];
    sort(a, a + n);
    forn (i, n - 1) {
        int v = a[i] ^ a[i + 1];
        if (v == 0)
            continue;
        int bit = 0;
        while ((2 << bit) <= v)
            ++bit;
        bits = max(bits, bit);
    }
    if (bits == -1) {
        cout << 0 << '\n';
        return 0;
    }
    forn (i, n)
        add(a[i], a[i] & (1 << bits) ? 1 : 2);
    int res = 2e9;
    forn (i, n) {
        int cur = get(a[i], a[i] & (1 << bits) ? 2 : 1);
        res = min(res, cur);
    }
    res ^= 1 << bits;
    cout << res << '\n';
}
*/
