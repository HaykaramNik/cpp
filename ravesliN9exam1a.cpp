#include <iostream>

class Square
{
private:
  int m_a;
public:
  Square (int a): m_a(a) {};

  int operator+(Square a)
  {
    return this->m_a + a.m_a;
  };

  int operator-()
  {
    return -this->m_a;
  };

  int& operator=(int num)
  {
    this->m_a = num;
    return this->m_a;
  }

  friend std::ostream& operator<< (std::ostream& out, Square& obj);
};

std::ostream& operator<< (std::ostream& out, Square& obj)
{
  out << obj.m_a;
  return out;
};


int main ()
{
  Square obj(15);
  Square obj2(48);
  int b = 48;

  int a = obj + obj2;
  std::cout << a << std::endl;

  std::cout << b << std::endl;

  return 0;
}