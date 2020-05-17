#include <iostream>
#include <algorithm>
using namespace std;
static const int N = 100;

void trace(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (i > 0)
            cout << " ";
        cout << A[i];
    }
    cout << "\n";
}

void insertationSort(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        int v = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > v)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        trace(A, N);
    }
}

int main()
{

    int A[N], N;

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    trace(A, N);
    insertationSort(A, N);

    return 0;
}
