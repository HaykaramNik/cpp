#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
  srand(time(NULL));

  std::cout << rand() % 200 <<std::endl;

  return 0;
}

// verjiny #34
