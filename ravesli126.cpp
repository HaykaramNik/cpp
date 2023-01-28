#include <iostream>

class Something
{
private:
  int m_width;
  int m_height;
public:
  Something(): m_width(10), m_height(15){};

  friend void friendFoo(const Something& obj);
};

void friendFoo(const Something& obj)
{
  std::cout << "width:\t" << obj.m_width << "\n"
            << "height:\t" << obj.m_height << std::endl;
};

int main()
{
  const Something obj;

  friendFoo(obj);
};

