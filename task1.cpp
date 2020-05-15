#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <queue>
#include <stack>

using namespace std;

const int MAX = 5000000;

int q1[MAX], s1[MAX], numbers[MAX];
int top = 0, tail = 0, head = 0;

bool stisEmpty()
{
    return (top == 0);
}

bool stisFull()
{
    return (top == MAX);
}

bool quisEmpty()
{
    return (head == tail);
}

bool quisFull()
{
    return (head == (tail + 1) % MAX);
}

template <class T>
void push(T v)
{
    if (stisFull())
        return;
    s1[top++] = v;
}

template <class T>
T pop()
{
    if (stisEmpty())
        return -1;
    T tmp = s1[--top];
    return tmp;
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
