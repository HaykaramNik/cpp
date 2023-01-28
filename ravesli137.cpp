#include <iostream>

class Dollars
{
private:
  int m_dollars;

public:
  Dollars(): m_dollars(0) {};
  Dollars(int dollars): m_dollars(dollars) {};

  Dollars& operator++ ()
  {
    ++(this->m_dollars);
    return *this;
  }

  Dollars operator++ (int value)
  {
    Dollars tmp = *this;
    ++(this->m_dollars);
    return tmp;
  }

  friend std::ostream& operator<< (std::ostream& out, const Dollars& dol);
};

std::ostream& operator<< (std::ostream& out, const Dollars& dol)
{
  out << dol.m_dollars;
  return out;
}

int main ()
{
  Dollars dol;
  std::cout << (dol++) << std::endl;
  std::cout << dol << std::endl;
}