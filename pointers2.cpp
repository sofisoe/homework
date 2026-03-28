#include <iostream> 
using namespace std;


int sum (const int* a, int n, int a, int b) {
    for (int i = 0; i < n; i++) { 
        if (a[i] < a) && (a[i] > b) {
        int m = 0;
    if (a[i] != 0) {
        a[i] /= 10;
        ++m;
    } 
}
    else m = 0;
    return m;
    }
}


int sup (const int* a, int n, int m) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (m != 0) {
            int arr2[m];
            for (int u = 0; u < m; u++) {
                arr2[u] = a[u] - 10 * (m - u); 
                for (int u = 0; u < m; u++) { 
                    int k = 0;
                    if arr2[u] = arr2[m - u] {
                        ++k;
                        if (k >= (m / 2)) {
                            ++s;
                        }
                    }
                }
            }
        }
    } 
    return s;
}

int main () {
    int n;
    int a;
    int b;
    cout << "Enter the length of an array" << endl;
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter a and b, a < b" << endl; 
    cin >> a >> b;
    cout << sup(arr, int n, int m)
   delete[] arr; 
return 0;
}