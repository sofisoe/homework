#include <iostream>
using namespace std;


int main() {

    // initialize array
    const int SIZE = 5;
    int* arr = new int[SIZE];

    // arr[0].    *arr

    // arr[1].    arr + 1

    // fill in array
    for (int i {0}; i < SIZE; i++)
    {
        std::cin >> arr[i];
    }

    // print array
    for (int i {0}; i < SIZE; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    // count el
    int count = 0;
    for (int i{0}; i<SIZE; i++ )
    {
        if (arr[i] % 4 == 0) {
            count = count + 1;
        }
    }

    // print num

    std::cout << count;

    delete[] arr;

    //int size;

    //cout << "Enter a value"<<endl;
    //cin >>size;
    //double* array = new double[size];
    
    //cout<<"Initialized array:"<<endl;


}



void newInitArray (double a[], int n) {

}