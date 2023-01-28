#include <iostream>
#include <cmath>

class Point
{
private:
  double m_a = 0.0;
  double m_b = 0.0;

public:
  Point () {};
  Point (double a, double b)
  {
    m_a = a;
    m_b = b;
  }

  void print()
  {
    std::cout << "a:\t" << (int)m_a << '\n'
              << "b:\t" << (int)m_b << std::endl;
  }

  double distanceTo(const Point&);
};

double Point::distanceTo(const Point& second)
{
  return std::sqrt((this->m_a - second.m_a) * (this->m_a - second.m_a) + (this->m_b - second.m_b) * (this->m_b - second.m_b));
}

int main()
{
  Point first;
  Point second(2.0, 5.0);

  first.print();
  second.print();
  std::cout << "Distance between two points: " <<   first.distanceTo(second) << std::endl;

  return 0;
}
