#include <iostream>

class Dollars
{
private:
  int m_dollars;
  
public:
  Dollars(int dollars): m_dollars(dollars) {};

  operator int()
  {
    return m_dollars;
  }
};

int main ()
{
  Dollars dollar(15);

  std::cout << dollar << std::endl;
}