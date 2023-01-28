#include <iostream>

class Data
{
public:
  Data(int size)
  {
    Size = size;
    data = new int[size];

    for (int i = 0; i < size; ++i)
    {
      data[i] = i;
    }

    std::cout << "Вызвался конструктор!\t" << this->data << std::endl;
  }

  Data(const Data& other)
  {
    this->data = new int[other.Size];
    this->Size = other.Size;

    for (int i = 0; i < this->Size; ++i)
    {
      this->data[i] = other.data[i];
    }

    std::cout << "Вызвался конструктор копирования!\t" << this->data << std::endl;
  }

  ~Data()
  {
    std::cout << "Вызвался деструктор!\t" << this->data << std::endl;
    delete[] data;
  }

private:
  int* data;
  int Size;
};

int main()
{
  Data a(5);
  Data b(a);

  return 0;
}