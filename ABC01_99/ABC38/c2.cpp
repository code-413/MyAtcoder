#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
const int MAX_N = 100005;

int main() {
  int N;
  cin >> N;
  vector<int> a(MAX_N, 0);
  for (int i = 0; i < N; i++) cin >> a[i];

  int l = 0, r = 0;
  long long ans = 0;

  while (true) {
    while (a[r + 1] > a[r]) r++;
    if (l >= N) break;
    ans += r - l + 1;
    l++;
    if (l == r + 1) r++;
  }

  cout << ans << endl;
  return 0;
}