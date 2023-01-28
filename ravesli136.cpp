#include <iostream>

class Dollars
{
private:
  int m_dollars;

public:
  Dollars(int dollars) { m_dollars = dollars; }

  friend bool operator>(const Dollars &d1, const Dollars &d2);
  // friend bool operator<=(const Dollars &d1, const Dollars &d2);

  // friend bool operator<(const Dollars &d1, const Dollars &d2);
  // friend bool operator>=(const Dollars &d1, const Dollars &d2);

  // bool operator> (const Dollars& dol)
  // {
  //   return this->m_dollars > dol.m_dollars;
  // };

  // bool operator< (const Dollars& dol)
  // {
  //   return this->m_dollars < dol.m_dollars;
  // }
};

bool operator> (const Dollars& d1, const Dollars& d2)
{
  return d1.m_dollars > d2.m_dollars;
}

int main ()
{
  std::cout << (Dollars(15) > Dollars(8)) << std::endl;
}