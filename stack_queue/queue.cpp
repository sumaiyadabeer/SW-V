// queue::empty
#include <iostream>       // std::cout
#include <queue>          // std::queue
using namespace std;
int main ()
{
  queue<int> myqueue;
  int sum (0);

  for (int i=1;i<=10;i++) 
  myqueue.push(i);

  while (!myqueue.empty())
  {
  	 cout << "value is " << myqueue.front() << endl;
     sum += myqueue.front();
     myqueue.pop();
  }

  cout << "total: " << sum << endl;

  return 0;
}
