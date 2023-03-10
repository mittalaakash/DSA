#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n)
{
    if (n == 0)
        return 0;

    vector<bool> prime(n, true); // all are marked primes already
    prime[0] = prime[1] = false;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (prime[i])
        {
            ans++;

            int j = 2 * i;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = countPrimes(n);
    cout << "number of primes: " << ans;

    return 0;
}