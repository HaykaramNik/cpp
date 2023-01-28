#include <iostream>
 
class Fraction
{
private:
	int m_numerator;
	int m_denominator;
 
public:
	Fraction(int numerator=0, int denominator=1):
		m_numerator(numerator), m_denominator(denominator)
	{
		// Мы поместили метод reduce() в конструктор, чтобы убедиться, что все дроби, которые у нас есть, будут уменьшены!
		// Все дроби, которые перезаписаны, должны быть повторно уменьшены
		reduce();
	}
 
	// Делаем функцию nod() статической, чтобы она могла быть частью класса Fraction и при этом, для её использования, нам не требовалось бы создавать объект класса Fraction
	static int nod(int a, int b)
	{
		return b == 0 ? a : nod(b, a % b);
	}
 
	void reduce()
	{
		int nod = Fraction::nod(m_numerator, m_denominator);
		m_numerator /= nod;
		m_denominator /= nod;
	}

  void print()
	{
		std::cout << m_numerator << "/" << m_denominator << "\n";
	}
 
	friend Fraction operator*(const Fraction &f1, const Fraction &f2);
	friend Fraction operator*(const Fraction &f1, int value);
	friend Fraction operator*(int value, const Fraction &f1);
  friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
  friend std::istream& operator>>(std::istream& in, Fraction& f);
};
 
Fraction operator*(const Fraction &f1, const Fraction &f2)
{
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}
 
Fraction operator*(const Fraction &f1, int value)
{
	return Fraction(f1.m_numerator * value, f1.m_denominator);
}
 
Fraction operator*(int value, const Fraction &f1)
{
	return Fraction(f1.m_numerator * value, f1.m_denominator);
}

std::ostream& operator<<(std::ostream& out,const Fraction& f)
{
  out << f.m_numerator << '/' << f.m_denominator;
  return out;
}

std::istream& operator>>(std::istream& in, Fraction& f)
{
  in >> f.m_numerator;
  in >> f.m_denominator;

  return in;
}

int main()
{
 
	Fraction f1;
	std::cout << "Enter fraction 1: ";
	std::cin >> f1;
 
	Fraction f2;
	std::cout << "Enter fraction 2: ";
	std::cin >> f2;
 
	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';
 
	return 0;
}