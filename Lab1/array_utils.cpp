#include <array>
#include <cstdlib>
using namespace std;

int printArray(const double* a, int n) {
    for (int i; i < n; i++) {
        cout << a[i] << " ";
    }
};

void initArray(double* a, int n, double minValue, double maxValue) {
    for (int i; i < n; i++) {
        a[i] = minValue + (maxValue - minValue) * (double)rand() / RAND_MAX;
    }
};

void reverse(double* a, size_t n) {
    for (int i; i < n; i++) {
        if (i % 2 == 0) {
                a[i] = a[n - i - 1];
            }
        }
        };

void cyclicLeftShift(double* a, size_t n, size_t k, size_t start, size_t end) {
    for (int i; i < n; i++) {
        if (a[i] > 0) {
            
        }
    }
};


void selectionSort(double* a, size_t n, size_t start, size_t end);
