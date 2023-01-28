#include <iostream>
#include <vector>
#include <string>


std::ostream& operator <<(std::ostream& out, const std::vector<int>& vec)
{
  for (int i = 0; i < vec.size(); ++i)
  {
    out << "vec[" << i << "]: " << vec[i] << '\n';
  };

  return out;
};

int foo(const int& var)
{
  return var;
}


int main()
{
  std::vector<int> vec = {5, 8, 4, 9, 4, 6, 7};

  std::cout << vec << std::endl;

  std::cout << foo(15) << std::endl;

  const int& vr = 12;

  std::cout << vr << std::endl;

  return 0;
}