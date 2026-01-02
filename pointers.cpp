#include <iostream>


int main()
{

    int a {9};

    int* ptr_a {&a};

    int size = 6;

    int* ptr_n = new int[3];

    *ptr_n = 1;
    *(ptr_n + 1) = 2;
    *(ptr_n + 2) = 3;
    // *ptr_n = 4;

    std::cout << ptr_n << ' '; 
    std::cout << ptr_n + 1 << ' ' << ptr_n + 2;

    // delete ptr_n;
}