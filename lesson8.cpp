#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the size"<<endl;
    cin>>n;
    int array[100];
    for (int i=0; i<n; i++) {
        array[i]=i;
        }
    for (int i=0; i<n; i++) {
        cout<< array[i]<< " ";
    }
}
