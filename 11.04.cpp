#include <iostream>
#include <functional>
using namespace std;


struct foo
    {
        int x;
        int y;

        foo() {x = 0; y = 0;}
        
        foo (int a, int b){
            x = a;
            y = b;
        }

        void add(foo rh) {
            x = x * rh.y + rh.x * y;
            y = rh.x * x;
        }

        foo operator+(foo rh) {
            foo res(x, y); 
            return res;
            }
        
    };

    void call(function<void()> callable) {
        callable();
    }

    struct Multiplier
    {
        int a;
        Multiplier(int p) {
            a = p;
        }
        int operator()(int x){return x * a;}
    };

    struct functor
    {   
        int treshold;
        void operator()()
        {
            cout << "Hello\n";
        }
    };
int main() {

    int t = 5;
    functor a;
    a.treshold = t;
    a();

    auto lambda = []() {
        cout << "Hello\n";

    };
    lambda();

    int x{2};
    Multiplier doubleMe(2);
    cout << doubleMe(x);

    call(a);
    call(lambda);
    // foo var(1, 2) {
    //     var.x = 1;
    //     var.y = 2;
    // };

    // foo a(1, 2) {
    //     a.
    // }
    return 0;
}