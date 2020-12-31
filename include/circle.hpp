#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.hpp"
#include <cmath>
#include "stdexcept"
class Circle : public Shape
{
public:
  Circle(float);
  float perimeter();
  float surface();
private:
  float r;
};
#endif
