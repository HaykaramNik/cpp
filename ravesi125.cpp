#include <iostream> 

class Something
{
private:
  static int s_something[10];

public:
  class _nested
  {
  public:
    _nested()
    {
      for (int i = 0, currentValueOfArray = 1; i < 10; ++i, currentValueOfArray *= 3)
      {
        s_something[i] = currentValueOfArray;
      }
    };
  };

  static void print_s_something()
  {
    for (int element: s_something)
    {
      std::cout << element << std::endl;
    }
  }

private:
  static _nested s_initSomething;
};

int Something::s_something[10];
Something::_nested Something::s_initSomething;

int main()
{
  Something::print_s_something();
};