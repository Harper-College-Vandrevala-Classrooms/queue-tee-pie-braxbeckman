#pragma once
#include "cutie.hpp"
#include <cstdlib>

class Dog : public Cutie
{
private:
public:
  std::string description() override
  {
    return "An adorable little furball";
  }
  int cuteness_rating() override
  {
    return 8;
  }
};
