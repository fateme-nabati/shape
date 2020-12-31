#include <iostream>
#include <vector>
#include <iomanip>
#include "circle.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"
#include "polygon.hpp"
using namespace std;
float totalSurface(vector<Shape *> &, int);
float totalPerimeter(vector<Shape *> &, int);

int main()
{
  vector<Shape *> shapes;
  short int choice;
  do
  {
    cout << "What do you want to make ?" << endl;
    cout << "1.Circle  2.Polygon  3.Rectangle  4.Triangle  5.exit\n-> ";

    cin >> choice;
    try
    {
      switch(choice)
      {
        case 1:
        cout << "Please enter the radius ---> ";
        float r;
        cin >> r;
        shapes.push_back(new Circle(r));
          break;
        case 2:
        cout << "Please enter number of sides ---> ";
        int n;
        cin >> n;
        cout << "Please the length of each side of the polygon ---> ";
        float x;
        cin >> x;
        shapes.push_back(new Polygon(n, x));
          break;
        case 3:
        cout << "Please enter the length and width ---> ";
        float l,w;
        cin >> l >> w;
        if(l < w)
        {
          float temp = l;
          l = w;
          w = temp;
        }
        shapes.push_back(new Rectangle(l, w));
          break;
        case 4:
        cout << "Please enter three sides ---> ";
        float a, b, c;
        cin >> a >> b >> c;
        shapes.push_back(new Triangle(a, b, c));
          break;
        case 5:
          break;
        default:
        cout << "You must enter a number bitween 1 and 4!!!!!!!!" << endl;
      }
    }
    catch(invalid_argument & e)
    {
      cerr << "Error! " << e.what() << endl;
    }

  } while(choice != 5);
  for (size_t i = 0; i < shapes.size(); i++)
  {
    cout << "the " << i << "th shape : \nsurface : " << setw(10)
      << left << shapes[i]->surface()
      << "\t perimeter : " << shapes[i]->perimeter() << endl;
  }
  cout << "          =======================================" << endl;
  cout << "total surface of all shapes : " << totalSurface(shapes, 0) << endl;
  cout << "total perimeter of polygons : " << totalPerimeter(shapes,2) << endl;
  cout << "total perimeter of triangles : " << totalPerimeter(shapes,4) << endl;
  cout << "total surface of circles : " << totalSurface(shapes,1) << endl;

  for (size_t i = 0; i < shapes.size(); i++)
 {
    delete shapes[i];
  }
  return 0;
}
float totalSurface(vector<Shape *> & shapes, int x)
{
  float sum = 0;
  switch (x)
  {
    case 0:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      sum += shapes[i]->surface();
    }
    return sum;
      break;
      case 1:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      Circle * c = dynamic_cast<Circle *> (shapes[i]);
      if(c != nullptr)
      {
        sum += shapes[i]->surface();
      }
     }
        break;
    case 2:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      Polygon * p = dynamic_cast<Polygon *> (shapes[i]);
      if(p != nullptr)
      {
        sum += shapes[i]->surface();
      }
    }
      break;
    case 3:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      Rectangle * r = dynamic_cast<Rectangle *> (shapes[i]);
      if(r != nullptr)
      {
        sum += shapes[i]->surface();
      }
    }
      break;
    case 4:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      Triangle * t = dynamic_cast<Triangle *> (shapes[i]);
      if(t != nullptr)
      {
        sum += shapes[i]->surface();
       }
     }
       break;
     default:
     throw invalid_argument("Invalid argument in \"totalSurface\" function !!!!!!");

  }
  return sum;
}
float totalPerimeter(vector<Shape *> & shapes, int x)
{
  float sum = 0;
  switch (x)
  {
    case 0:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      sum += shapes[i]->perimeter();
    }
    return sum;
      break;
      case 1:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      Circle * c = dynamic_cast<Circle *> (shapes[i]);
      if(c != nullptr)
      {
        sum += shapes[i]->perimeter();
      }
     }
        break;
    case 2:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      Polygon * p = dynamic_cast<Polygon *> (shapes[i]);
      if(p != nullptr)
      {
        sum += shapes[i]->perimeter();
      }
    }
      break;
    case 3:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      Rectangle * r = dynamic_cast<Rectangle *> (shapes[i]);
      if(r != nullptr)
      {
        sum += shapes[i]->perimeter();
      }
    }
      break;
    case 4:
    for (size_t i = 0; i < shapes.size(); i++)
    {
      Triangle * t = dynamic_cast<Triangle *> (shapes[i]);
      if(t != nullptr)
      {
        sum += shapes[i]->perimeter();
      }
    }
      break;
    default:
    throw invalid_argument("Invalid argument in \"totalPerimeter\" function !!!!!!");

  }
  return sum;
  cout << "hello fateme!!!!!" << endl;
}
