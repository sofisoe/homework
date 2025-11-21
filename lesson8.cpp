#include <iostream>
using namespace std;

int main () {
    int n;
    int arr[100];
    cout << "Enter the size"<<endl;
    cin>>n;
    for (int i=0; i < n; i++) {
        arr[i]=n-(i+1);
        cout<<arr[i]<<" ";
    }

}


