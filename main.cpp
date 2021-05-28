#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
  stack st;
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.push (12);
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.push (32);
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.push (41);
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.push (56);
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.pop();
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.pop();
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.pop();
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.pop();
  cout<<st.top()<<" size="<<st.size()<<'\n';

  st.pop();
}

