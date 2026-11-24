#include <iostream>

const int MAX = 5000000;

int A[MAX], n;

int biarysearch(int key)
{
    int left = 0;
    int right = n;
    int mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (key == A[mid])
            return 1;
        if (key > A[mid])
            left = mid + 1;
        else if (key < A[mid])
            right = mid;
    }
}