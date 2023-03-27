#include <bits/stdc++.h>

using namespace std;

long long pairsNaive(int N, int arr[])
{
  long long cnt = 0; // count of awesome pairs
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      if ((arr[i] & arr[j]) > (arr[i] ^ arr[j]))
      {
        cnt++; // found an awesome pair
      }
    }
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;

  int arr[1000];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  long long ans = pairsNaive(n, arr);
  cout << ans;

  return 0;
}