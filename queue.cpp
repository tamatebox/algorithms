#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <queue>
#include <stack>

using namespace std;

const int MAX = 5000000;

int Q[MAX];
int tail = 0, head = 0;

bool quisEmpty()
{
    return (head == tail);
}

bool quisFull()
{
    return (head == (tail + 1) % MAX);
}

template <class T>
void enqueue(T v)
{
    if (quisFull())
        return;
    Q[tail++] = v;
    if (tail == MAX)
        tail = 0;
}

template <class T>
T dequeue()
{
    if (quisEmpty())
        return -1;
    T res = Q[head];
    ++head;
    if (head == MAX)
        head = 0;
    return res;
}
