#include "Stack.h"
#include <iostream>

using namespace std;

stack::stack()
{
  data=0;
  Size=0;
  Top=NULL;
  next=NULL;
}

stack::~stack()
{}

void stack::push(int n)
{
  stack* newEl=new stack;
  newEl->data=n;
  newEl->next=Top;
  Top=newEl;
  Size++;
}

int stack::top()
{
  if (Top!=NULL)
  return (Top->data);
  else cout<<"Стэк пустой\n";
  return -1;
}

void stack::pop()
{
  if (Size!=0)
  {
    Top=Top->next;
    Size--;
  }
  else 
  {
    cout<<"Невозможно применить операцию pop(), стек пустой\n";
  }
}

int stack::size()
{
  return Size;
}
