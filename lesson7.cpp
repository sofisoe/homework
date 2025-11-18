#include <iostream>
using namespace std;

void fio(){
    cout<<"Sofya Sluchich";
}

void sqr(int n){
   cout<< n << " "<<n * n<< endl;
}

void sum(int s){
    int sum = 0;
    for (int i=1; i<=s; i++){
        sum += i*i;
    }

    cout<<sum<<endl;
}


int main ()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        sqr(i);
    }

    sum(n);

    fio();
}

