#include "dog.hpp"
#include "queue.hpp"
#include <iostream>

int main()
{
  Queue q;
  Dog dog;

  q.enqueue(&dog);
  q.enqueue(&dog);
  q.enqueue(&dog);
  q.enqueue(&dog);
  q.enqueue(&dog);
  q.enqueue(&dog);
  q.enqueue(&dog);
  std::cout << "cout << q.size: " << q.size() << std::endl;
  q.dequeue()->description();
  q.dequeue()->description();
  q.dequeue()->description();
}
