#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    n = 7;
    arr[6] = 10;
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
    int a = 15;
    int b = 24;
    n = 15;
    arr[7] = 23;
    arr[8] = 24;
    arr[9] = 25;
    arr[10] = 26;
    arr[11] = 27;
    arr[12] = 28;
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
    std::cout << "a=" << a << std::endl << "b=" << b << std::endl;
   
    return 0;
};
