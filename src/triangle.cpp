#include "triangle.hpp"
using namespace std;
Triangle::Triangle(float a, float b, float c)
{
  if(a < 0 || b < 0 || c < 0)
  {
    throw invalid_argument("sides of triangle must be positive!!!!!!!");
  }
  this->a = a;
  this->b = b;
  this->c = c;

}
float Triangle::surface()
{
  float p = this->perimeter() / 2;
  float s = sqrt(p * (p - a) * (p - b) * (p - c));
  return s;
}
float Triangle::perimeter()
{
  return a + b + c;
}
