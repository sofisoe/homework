#pragma once
#include <cstdlib>

void printArray(const double* a, int n);

void initArray(double* a, int n, double minValue, double maxValue);

void reverse(double* a, size_t n, size_t start, size_t end);

void cyclicLeftShift(double* a, size_t n, size_t k, size_t start, size_t end);

void selectionSort(double* a, size_t n, size_t start, size_t end);
