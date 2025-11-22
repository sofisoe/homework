#include <iostream>
using namespace std;


int main () {
char arr[100];
char temp =0;
int i =0;
int num =0;

cout << "Enter a number" <<endl;
while (temp!= '\n') {
    cin.get(temp);
    arr[i]=temp;
    i++;
}
arr[i]='\0';

for (int j=0; j<i; j++) {
    temp =arr[j];
    if (temp >= '0' && temp <='9') {
        num =num*10+(temp-'0');
    }
    else {
        cout<<"No space!";
        return 0;
    }
}
cout << num<<'\n';
return 0;
}
