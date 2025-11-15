#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    enum location {
        ocean, beach, field
    };
    location loc;
    cin >> x >> y;
    if (y < -x+3){
        loc = beach;
    }
    else if (y > -x+3){
        loc = ocean;
    }
    else {
        loc = field;
    }
    switch (loc) {
        case ocean:
            cout << "ocean";
            break;

        case beach:
            cout << "beach";
            break;
        case field:
            cout << "field";
        
    }
    return 0;
}