#include <bits/stdc++.h>

using namespace std;

long long pairs(int N, int arr[])
{
    // Initialize an array of size 31 to store count of numbers having a particular bit set
    long long int c[31] = {0}, ans = 0;

    // Iterate through the input array and count the number of times each bit is set
    for (int i = 0; i < N; i++)
    {
        // Skip 0s as it will not contribute to any awesome pairs
        if (arr[i] == 0)
            continue;

        int j = 0;
        // Count the number of bits required to represent the current number
        while (arr[i] / (1 << j) != 0)
            j++;
        // Increment the count of the bit at index (j-1) in the c array
        c[j - 1]++;
    }

    // Iterate through the c array and count the number of awesome pairs using the formula (nC2) = (n*(n-1))/2
    for (int i = 0; i < 31; i++)
        ans += (c[i] * (c[i] - 1)) / 2;

    // Return the final count of awesome pairs
    return ans;
}

int main()
{
    int n;
    cin >> n;

    // int arr[INT_MAX] = {0};
    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = pairs(n, arr);
    cout << ans;

    return 0;
}