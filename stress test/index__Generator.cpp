#include <iostream>
using namespace std;
int main()
{

    srand(time(0)); // seeding the rand with system time

    // int n = rand() % 50 + 1;
    int n = 1000;
    cout << n << " ";

    for (int i = 0; i < n; i++)
    {
        int temp = rand() % 20 + 1;
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}