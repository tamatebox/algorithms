#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
static const int MAX = 1000000;

long long cnt;
int l;
int A[MAX];
int n;
vector<int> G;

void insertationSort(int A[], int n, int g)
{
    for (int i = g; i < n; i++)
    {
        int v = A[i];
        int j = i - g;
        while (j > 0 && A[j] > v)
        {
            A[j + g] = A[j];
            j -= g;
            cnt++;
        }
        A[j + g] = v;
    }
}

void shellSort(int A[], int n)
{
    for (int h = 1;;)
    {
        if (h > n)
            break;
        G.push_back(h);
        h = 3 * h + 1;
    }

    for (int i = G.size() - 1; i >= 0; i--)
    {
        insertationSort(A, n, G[i]);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    cnt = 0;

    shellSort(A, n);

    cout << G.size() << endl;
    for (int i = G.size() - 1; i >= 0; i--)
    {
        cout << G[i];
        if (i)
            cout << " ";
    }
    cout << endl;
    cout << cnt << endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << endl;

    return 0;
}