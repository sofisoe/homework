#include <iostream>
using namespace std;

void m(char map[], int x, int y) {
    int coord= (x-1)*3+(y-1);
    cout << map[coord]<<endl;
}

void  field(int i, int k) {
    enum location {
        o, b, f
    };
    location loc;
    for (i=0; i<3; i++)
    {
        for(k=0; k<3; k++){
            if (i+k==2) {
                loc = b;
            }
            else if (i+k<2) {
                loc = o;
            }
            else {
                loc=f;
            }
            
           switch (loc) {
            case b:
            cout<<'b'<<' ';
            break;
           case o:
           cout<<'o'<<' ';
           break;
           case f:
           cout<<'f'<<' ';
           };
        }
        cout<<endl;

}
}

int main () {
    char map[9] = {'o', 'o', 'b','o','b','f','b','f','f'};
    int x;
    int y;
    field(3, 3);
    cout<<"Enter x & y"<<endl;
    cin >> x>>y;
    if (x<=3 && y<=3) {
        m(map, x, y);
    }
    else {
        cout<<"You are dumb twice you left the map";
    }
    return 0;
}

