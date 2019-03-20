#include<iostream>
#include"stack.h"
#include"book.h"
#include"node.h"
using namespace std;

int main()
{
  Stack<int> s;
  for (int i=0;i<=5;i++)
  {
      s.push(i);
  }
  
  while(!s.isEmpty())
  {
      cout << s.top() << endl;
      s.pop();
  }
  
  StackV<Book> sb;
  
  Book b1(100,"C++");
  Book b2(200, "Python");
  Book b3(300, "Java");
  Book b4(400, "SQL");
  
  sb.push(b1);
  sb.push(b2);
  sb.push(b3);
  sb.push(b4);
  
  while(!sb.isEmpty())
  {
      Book topmostbook = sb.top();
      cout << topmostbook << endl;
      sb.pop();
  }
  
  return 0;
}