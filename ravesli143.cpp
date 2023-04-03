#include <iostream>
#include <string>

class SomeString
{
private:
  std::string m_string;

public:
  explicit SomeString (int a)
  {
    m_string.resize(a);
  };

  SomeString (char) = delete;

  SomeString (const char* string)
  {
    m_string = string;
  };

  friend std::ostream& operator<<(std::ostream& out, const SomeString& s);
};

std::ostream& operator<< (std::ostream& out, const SomeString& s)
{
  out << s.m_string;
  return out;
}

int main()
{
  // SomeString myString = 'a';
  // std::cout << myString << std::endl;
  std::cout << static_cast<SomeString>(10) << std::endl;

  return 0;
}