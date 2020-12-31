#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.hpp"

class Triangle : public Shape
{
public:
  Triangle(float, float, float);
  float surface();
  float perimeter();

private:
  float a, b, c;
};
#endif
