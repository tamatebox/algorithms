#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <queue>
#include <stack>

using namespace std;

const int MAX = 5000000;

int S[MAX];
int top = 0;

bool isEmpty()
{
    return (top == 0);
}

bool isFull()
{
    return (top >= MAX - 1);
}

void push(int x)
{
    if (isFull())
        return;
    S[++top] = x;
}

int pop()
{
    if (isEmpty())
        return;
    top--;
    return S[top + 1];
}
