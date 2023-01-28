#include <iostream>

class Boo
{
private:
  int a;
  int b;

public:
  Boo()
  {
    init();
  };

  Boo(int b): Boo()
  {
    this->b = b;
  };

  void init()
  {
    this->a = 10;
  }

  void print()
  {
    std::cout << this->a << "\n" << this->b << std::endl;
  }
};

int main()
{
  Boo obj(15);

  obj.print();

  return 0;
}