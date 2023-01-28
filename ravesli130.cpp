#include <iostream>

class Fraction
{
private:
  int m_first;
  int m_second;

public:
  Fraction(int first, int second)
  {

    m_first = first;
    m_second = second;
    reduce();
  };

  int nod(int a, int b)
  {
    return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
  }

  void reduce()
  {
    int nodNum = nod(m_first, m_second);
    m_first = m_first / nodNum;
    m_second = m_second / nodNum;
  };

  void print()
  {
    std::cout << this->m_first << '/' << this->m_second << std::endl;
  };

  friend Fraction operator*(const Fraction &f1, const Fraction &f2);
  friend Fraction operator*(const Fraction &f, int value);
  friend Fraction operator*(int value, const Fraction &f);
};

Fraction operator*(const Fraction &f1, const Fraction &f2)
{
  int tmp_first = f1.m_first * f2.m_first;
  int tmp_second = f1.m_second * f2.m_second;
  return Fraction(tmp_first, tmp_second);
};

Fraction operator*(const Fraction &f, int value)
{
  return Fraction(f.m_first * value, f.m_second);
};

Fraction operator*(int value, const Fraction &f)
{
  return Fraction(f.m_first * value, f.m_second);
};

int main()
{
  Fraction f1(3, 4);
  f1.print();

  Fraction f2(2, 7);
  f2.print();

  Fraction f3 = f1 * f2;
  f3.print();

  Fraction f4 = f1 * 3;
  f4.print();

  Fraction f5 = 3 * f2;
  f5.print();

  Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
  f6.print();
}