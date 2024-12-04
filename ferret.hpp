#pragma once
#include "cutie.hpp"
#include <cstdlib>

class Ferret : public Cutie
{
private:
public:
  std::string description() override
  {
    return "A stinky little guy who loves to climb stuff";
  }
  int cuteness_rating() override
  {
    return 7;
  }
};
