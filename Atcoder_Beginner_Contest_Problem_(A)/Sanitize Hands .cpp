#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, k; cin>> n>> k;
  int ans = 0;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    int x; cin>> x;
    sum += x;
    if(sum <= k) ans++;
  }
  cout << ans << endl;
  return 0;
}
