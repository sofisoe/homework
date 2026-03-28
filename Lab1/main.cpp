#include <iostream>
using namespace std;


int main () {
   int n;
    double minValue, maxValue;

    cin >> n;
    cin >> minValue >> maxValue;

    double* a = new double[n];
    initArray(a, n, minValue, maxValue);

    cout << "Исходный массив:\n";
    printArray(a, n);

    cout << "\nПосле Часть 1 (reverse):\n";
    reverse(a, n);
    printArray(a, n);

    cout << "\nПосле Часть 2 (cyclicLeftShift):\n";
    cyclicLeftShift(a, n);
    printArray(a, n);

    cout << "\nПосле Часть 3 (selectionSort):\n";
    selectionSort(a, n);
    printArray(a, n);

    delete[] a;


    printTestResult("initArray range", testInitArrayRange());
    printTestResult("reverse full array", testReverseFullArray());
    printTestResult("cyclic left shift", testCyclicLeftShift());
    printTestResult("selection sort", testSelectionSort());

    return 0;

}