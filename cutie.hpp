#pragma once
#include <string>

class Cutie
{
public:
  virtual std::string description() = 0; // All cuties need to have a description of what makes them cute.
  virtual int cuteness_rating() = 0;     // All cuties get a cuteness rating out of ten.
};
