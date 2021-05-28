#pragma once

#include <iostream>

using namespace std;

class stack
{
  int data;
  int Size;
  stack* Top;
  stack* next;

  public:

  stack();
  ~stack();
  void push(int);
  void pop();
  int top();
  int size();
};
