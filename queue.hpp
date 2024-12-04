#pragma once
#include "cutie.hpp"
#include "dog.hpp"
#include <iostream>
#include <array>

class Queue
{
private:
  Cutie *arr[5];
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
    arrEnd = (arr + 4);
    for (int i = 0; i < 5; i++)
    {
      *(arr + i) = nullptr;
    }
  }

  int size()
  {
    int currentSize{};
    for (int i = 0; i < 5; i++)
    {
      if (*(arr + i) == nullptr)
      {
        continue;
      }
      else
      {
        currentSize++;
      }
    }
    return currentSize;
  }

  void enqueue(Cutie *item)
  {
    if (size() == 5)
    {
      std::cout << "Queue is full!" << std::endl;
    }
    else
    {
      // std::cout << item->description() << std::endl;
      *top = item;
      if (top == arrEnd)
      {
        top = arrStart;
      }
      else
      {
      top++;
      }
    }
  }

  Cutie *dequeue()
  {
    Cutie *tmp = nullptr;

    if (size() == 0)
    {
      std::cout << "Queue is empty!" << std::endl; 
    }
    else
    {
      *tmp = **bottom;
      *bottom = nullptr;
      if (bottom == arrEnd)
      {
        std::cout << "if 1" << std::endl;
        bottom = arrStart;
      }
      else
      {
        std::cout << "if 2" << std::endl;
        bottom++;
      }
    }

    return tmp;
  }
};
