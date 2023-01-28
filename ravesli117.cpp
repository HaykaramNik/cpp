#include <iostream>
#include <cstdint>

class RGBA
{
private:
  std::uint8_t m_red;
  std::uint8_t m_green;
  std::uint8_t m_blue;
  std::uint8_t m_alpha;

public:
  RGBA ():
    m_red(3),
    m_green{16},
    m_blue{},
    m_alpha{255}
  {};

  void print()
  {
    std::cout << "red: " << (int)m_red << std::endl
              << "green: " << (int)m_green << std::endl
              << "blue: " << (int)m_blue << std::endl
              << "alpha: " << (int)m_alpha << std::endl;
  }
};

int main()
{
  RGBA color;
	color.print();

  return 0;
}