#ifndef POLYGON_H
#define POLYGON_H
#include "shape.hpp"
#include <cmath>
class Polygon : public Shape
{
public:
  Polygon(int, float);
  float perimeter();
  float surface();
private:
  int n;//number of sides;
  float lengthOfEachSide;
};
#endif
