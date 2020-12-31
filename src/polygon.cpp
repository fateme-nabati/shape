#include "polygon.hpp"
using namespace std;
Polygon::Polygon(int n, float s)
{
  if(n < 0 || s < 0)
  {
    throw invalid_argument("number of sides and length of each side must be positive!!");
  }
  this->n = n;
  lengthOfEachSide = s;
}

float Polygon::perimeter()
{
  return n*lengthOfEachSide;
}
float Polygon::surface()
{
  /*double area = 0.0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        //area += (X[j] + X[i]) * (Y[j] - Y[i]);
        area += (X[i] * Y[i+1]) - (Y[i+1] * Y[i]);

        //j = i;
    }
    area += (X[n-1] * Y[0]) - (Y[n-1] * X[0]);
    return abs(area / 2.0);*/
    float s = (n * pow(lengthOfEachSide, 2)) / (4.0 * tan((M_PI / n)));
    return s;
}
