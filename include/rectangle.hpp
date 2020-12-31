#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.hpp"

class Rectangle : public Shape
{
public:
  Rectangle(float, float);
  float surface();
  float perimeter();

private:
  float x, y;
};
#endif
