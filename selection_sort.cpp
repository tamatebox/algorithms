#include <iostream>
using namespace std;

int selectionSort(int A[], int N)
{
    int t, sw = 0, minj;
    for (int i = 0; i < N - 1; i++)
    {
        minj = i;
        for (int j = N - 1; j >= i + 1; j--)
        {
            minj = i;
            for (int j = i; j < N; j++)
            {
                if (A[j] < A[minj])
                    minj = j;
            }
        }
        t = A[i];
        A[i] = A[minj];
        A[minj] = t;
        if (i != minj)
            sw++;
    }
    return sw;
}

int main()
{

    int A[100], N, sw;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    sw = selectionSort(A, N);

    for (int i = 0; i < N; i++)
    {
        if (i)
            cout << " ";
        cout << A[i];
    }

    cout << endl;
    cout << sw << endl;

    return 0;
}