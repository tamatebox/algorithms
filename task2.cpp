#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <set>
#include <queue>

using namespace std;

const int MAX = 5000000;

int h1[MAX + 1], numbers[MAX];
int top;

void heapfy(int i)
{
    int l, r, largest;
    l = 2 * i;
    r = 2 * i + 1;

    if (l <= MAX && h1[l] > h1[i])
        largest = l;
    else
        largest = i;
    if (r <= MAX && h1[r] > h1[largest])
        largest = r;

    if (largest != i)
    {
        swap(h1[i], h1[largest]);
        heapfy(largest);
    }
}

template <class T>
T extract()
{
    if (top < 1)
        cout << "error: stack is empty." << endl;
    T maxv = h1[1];
    h1[1] = h1[top--];
    heapfy(1);
    return maxv;
}

template <class T>
void increase(int i, T key)
{
    if (key < h1[i])
        return;
    h1[i] = key;
    while (i > 1 && h1[i / 2] < h1[i])
    {
        swap(h1[i], h1[i / 2]);
        i = i / 2;
    }
}

template <class T>
void insert(T key)
{
    top++;
    h1[top] = -MAX;
    increase(top, key);
}