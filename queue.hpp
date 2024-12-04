#pragma once
#include "cutie.hpp"
#include "dog.hpp"
#include <iostream>
#include <array>

class Queue
{
private:
  Cutie *arr[11];
  Cutie **bottom;
  Cutie **top;
  Cutie **arrEnd;
  Cutie **arrStart;

public:
  Queue()
  {
    bottom = arr;
    top = arr;
    arrStart = arr;
    arrEnd = (arr + 10);
    // *(arr + 10) = nullptr;
  }

  int size()
  {
    return top - bottom;
  }

  void enqueue(Cutie *item)
  {
    if (top == arrEnd)
    {
      std::cout << "No more space in the queue!" << std::endl;
    }
    // else if (top == arrEnd - 1)
    // {
    //   *top = item;
    // }
    else
    {
      // std::cout << item->description() << std::endl;
      *top = item;
      top++;
    }
  }

  Cutie *dequeue()
  {
    Cutie *tmp = nullptr;
    // std::cout << "tmp set to nullptr" << std::endl;

    if (size() == 0)
    {
      std::cout << "Queue is empty!" << std::endl; 
      return nullptr;
    }
    else
    {
      tmp = *bottom;
      // std::cout << "*tmp = **bottom" << std::endl;
      if (bottom == arrEnd)
      {
        std::cout << "Queue is empty!" << std::endl;
        return nullptr;
      }
      else
      {
        // std::cout << "operation succesful" << std::endl;
        bottom++;
      }
    }
  // std::cout << "returning tmp" << std::endl;
    return tmp;
  }
};
