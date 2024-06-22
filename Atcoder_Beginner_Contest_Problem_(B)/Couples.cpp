#include<bits/stdc++.h>
using namespace std;
int main() {
  int ans = 0;
  int n; cin>> n;
  n *= 2;
  int A[n];
  for(int i = 0; i < n; i++) {
    cin>> A[i];
  }
  for(int i = 1; i < n-1; i++) {
    if(A[i-1] == A[i+1]) ans++;
  }
  cout << ans << endl;
  return 0;
}
