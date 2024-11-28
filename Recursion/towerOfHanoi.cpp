#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char main, char help,
                  char dest)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, main, dest, help);
    cout << "Move disk " << n << " from rod " << main
         << " to rod " << help << endl;
    towerOfHanoi(n - 1, dest, help, main);
}

// Driver code
int main()
{
    int N = 3;

    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}

