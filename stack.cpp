#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <queue>
#include <stack>

using namespace std;

const int MAX = 5000000;

int s1[MAX];
int top = 0;

bool stisEmpty()
{
    return (top == 0);
}

bool stisFull()
{
    return (top == MAX);
}

template <class T>
void enqueue(T v)
{
    if (quisFull())
        return;
    q1[tail++] = v;
    if (tail == MAX)
        tail = 0;
}

template <class T>
T dequeue()
{
    if (quisEmpty())
        return -1;
    T res = q1[head];
    ++head;
    if (head == MAX)
        head = 0;
    return res;
}
