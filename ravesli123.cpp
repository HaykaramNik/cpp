#include <iostream>

class Another
{
private:
  int m_width;
  int m_height;

public:
  Another(int width, int height)
  {
    m_width = width;
    m_height = height;
  };

  void print() const
  {
    std::cout << "width:\t" << m_width << "\n"
              << "height:\t" << m_height << std::endl;
  };

  void print()
  {
    std::cout << "width:\t" << m_width << "\n"
              << "height:\t" << m_height << std::endl;
  }

  int& foo()
  {
    return m_height;
  }
};

int main()
{
  Another obj2(12, 13);
  obj2.foo() = 134;
  obj2.print();

  return 0;
}