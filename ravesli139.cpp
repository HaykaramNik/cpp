#include <iostream>
#include <string>

class MyString
{
private:
  std::string m_str;

public:
  MyString(std::string str) : m_str(str){};

  std::string operator()(int begin, int end)
  {
    std::string tmpString = "";
    for (int i = begin, j = 1; i < m_str.size() && j <= end; ++i, ++j)
    {
      tmpString += m_str[i];
    }

    return tmpString;
  }
};

int main()
{
  MyString string("Hello, world!");
  std::cout << string(7, 6) << std::endl;

  return 0;
}
