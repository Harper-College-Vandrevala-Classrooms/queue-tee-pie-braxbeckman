#include "dog.hpp"
#include "queue.hpp"
#include "ferret.hpp"
#include "cat.hpp"
#include <iostream>

int main()
{
  Queue q;
  Dog dog;
  Cat cat;
  Ferret f;

  q.enqueue(&dog);
  q.enqueue(&dog);
  std::cout << "Queue's current size: " << q.size() << std::endl;
  q.enqueue(&cat);
  q.enqueue(&cat);
  std::cout << "Queue's current size: " << q.size() << std::endl;
  q.enqueue(&f);
  q.enqueue(&f);
  std::cout << "Queue's current size: " << q.size() << std::endl;

  std::cout << "Queue's current size: " << q.size() << std::endl;
  std::cout << "Stored Dog's info: " << std::endl;
  std::cout << q.dequeue()->description() << std::endl;
  std::cout << "Cutness rating: " << q.dequeue()->cuteness_rating() << std::endl << std::endl;

  std::cout << "Queue's current size: " << q.size() << std::endl;
  std::cout << "Stored Cat's info: " << std::endl;
  std::cout << q.dequeue()->description() << std::endl;
  std::cout << "Cutness rating: " << q.dequeue()->cuteness_rating() << std::endl << std::endl;

  std::cout << "Queue's current size: " << q.size() << std::endl;
  std::cout << "Stored Ferret's info: " << std::endl;
  std::cout << q.dequeue()->description() << std::endl;
  std::cout << "Cutness rating: " << q.dequeue()->cuteness_rating() << std::endl << std::endl;

    std::cout << "Queue's current size: " << q.size() << std::endl;
}
