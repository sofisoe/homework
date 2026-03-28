#include <iostream> 
using namespace std;

int sum(const int* a, int n) { 
    int s = 0; 
    for (int i = 0; i < n; i++) {
        s += a[i]; 
    }
    return s;
}


int main () {
    int n;

    cout << "Enter an array: " << endl;
    cin >> n;

    int* arr = new int[n];
    cout << "Enter elements of an array: " << endl; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << sum(arr, n) << endl;


    delete[] arr;
    return 0;
}