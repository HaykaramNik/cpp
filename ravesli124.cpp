#include <iostream>

class Another
{
public:
  static int s_value[];
};

int Another::s_value[5];

int main()
{
  // Another::s_value = 12;

  // std::cout << Another::s_value << std::endl;

  Another::s_value[0] = 1;


  Another a;

  // a.s_value = 10;

  std::cout << Another::s_value[0] << std::endl;

}