#include "rectangle.hpp"
using namespace std;
Rectangle::Rectangle(float x, float y)
{
  if(x < 0 || y < 0)
  {
    throw invalid_argument("sides of rectangle must be positive!!!!!!!");
  }
  this->x = x;
  this->y = y;
}
float Rectangle::surface()
{
  return x*y;
}
float Rectangle::perimeter()
{
  return 2 *(x + y);
}
