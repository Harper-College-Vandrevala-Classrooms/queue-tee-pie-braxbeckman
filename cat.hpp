#pragma once
#include "cutie.hpp"
#include <cstdlib>

class Cat : public Cutie
{
private:
public:
  std::string description() override
  {
    return "A small menace waiting to ruin your belongings";
  }
  int cuteness_rating() override
  {
    return 9;
  }
};
