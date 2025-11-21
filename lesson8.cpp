#include <iostream>
#include <string>
using namespace std;

int main () {
    int arr[100];
    int i;
    char l;
    string w;

    cout<<"type a word"<<endl;
    getline(cin, w);
    
    int s = w.size();
    cout << "shifr: "<<endl;

    for (int i=0; i<s; i++) {
        char l = w[i];
        if (l >='a' && l<= 'z') {
            arr[i]=(l-'a'+1);
    }
        else {
            cout<<"English little letters please";
            arr[i]=0;
        }
    }
    for (int i=0; i<s; i++) {
        cout << arr[i]<<" ";
    }


}