#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 2000000;

int maximum_profit(int R[], int N)
{

    int maxv = -MAX;
    int minv = R[0];

    for (int i = 1; i < N; i++)
    {
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }

    return maxv;
}

int main()
{
    int R[MAX], n;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> R[i];

    int maxv = maximum_profit(R, n);

    cout << maxv << endl;

    return 0;
}