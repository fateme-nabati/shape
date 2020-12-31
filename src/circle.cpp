#include "circle.hpp"
using namespace std;
Circle::Circle(float r)
{
  if(r < 0)
  {
    throw invalid_argument("radius must be positive!!!!!!!");
  }
  this->r = r;
}

float Circle::perimeter()
{
  return 2*r*3.14;
}
float Circle::surface()
{
  return pow(r, 2)*3.14;
}
