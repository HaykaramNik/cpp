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

  friend double distanceFrom(const Point&, const Point&);
};

double distanceFrom(const Point& first, const Point& second)
{
  return std::sqrt((first.m_a - second.m_a) * (first.m_a - second.m_a) + (first.m_b - second.m_b) * (first.m_b - second.m_b));
}

int main()
{
  Point first;
  Point second(2.0, 5.0);

  first.print();
  second.print();
  std::cout << "Distance between two points: " <<   distanceFrom(first, second) << std::endl;

  return 0;
}
