#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
  srand(time(NULL));

  int i = 0;

  while (i < 10)
  {
    std::cout << rand() % 10 << std::endl;
    ++i;
  }
}

