#include <iostream>

class Dollars
{
private:
  int m_dollars;
  int m_cents;

public:
  Dollars (): m_dollars(15), m_cents(50) { std::cout << "Dollars()"; };
  Dollars (int dollars, int cents = 15): m_dollars(dollars), m_cents(cents) { std::cout << "Dollars(int, int)"; };
  Dollars (const Dollars& dol)
  {
    m_dollars = dol.m_dollars;
    m_cents = dol.m_cents;

    std::cout << "Dollars(const Dollars&)";
  }

  operator double()
  {
    return (double)m_dollars + (double)m_cents / 100;
  }
};

int main()
{
  Dollars dol1;
  std::cout << std::endl;
  Dollars dol2(24);
  std::cout << std::endl;
  Dollars dol3(Dollars(15));
  std::cout << std::endl;

  std::cout << dol2 << std::endl;
}