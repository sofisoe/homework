#include <iostream>
using namespace std;

float reverse (unsigned char *n);
float gray (unsigned char *n);

void transform(struct Color&);

void apply (const Color& pixel, void(*transform)(Color&)) {
    transform(pixel);
}

int main() { 

int k = 0;

struct Color {
    int red;
    int green;
    int blue;
};

unsigned char *n = {red, green, blue}
cin >> n;
cout << "What func to use? (0, 1)";
cin >> k;

void apply (const Color& pixel, void(*transform)(Color&)) {
    transform(pixel);
}

void (*t_ptr)(Color&) = inverse;
apply(c, t_ptr)


}