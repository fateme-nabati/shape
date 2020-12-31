#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <stdexcept>
#include <cmath>
class Shape
{
public:
  virtual float surface() = 0;
  virtual float perimeter() = 0;

private:

};
#endif
